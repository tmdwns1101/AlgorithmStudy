


def solution(num, base):
    q, r = divmod(num, base)
    if q == 0:
        return r 
    else:
        return solution(q, base) + r

if __name__ == '__main__':
    
    for i in range(2992, 10000):
        if solution(i, 10) == solution(i, 12) == solution(i, 16):
            print(i)

