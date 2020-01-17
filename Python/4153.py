def solution(a, b, c):
    if pow(a,2) + pow(b, 2) == pow(c, 2):
        print('right')
    else:
        print('wrong')

if __name__ == '__main__':
    while(1):
        sides_lengthes = list(map(int, input().rstrip().split()))
        sides_lengthes.sort()
        a, b, c = sides_lengthes
        if a == 0 and b == 0 and c == 0:
            break
        else:
            solution(a, b, c)