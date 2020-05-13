

def getNcount(sumValue):
    n = 1
    while True:
        if (n*(n+1))/2 <= sumValue:
            n += 1
        else:
            break
    return n-1

if __name__ == '__main__':
    sumValue = int(input())

    ans = getNcount(sumValue)
    print(ans)