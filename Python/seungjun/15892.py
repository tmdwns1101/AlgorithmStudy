import sys

r = 31
m = 1234567891


def make_hash(origin, idx):
    if idx == len(origin):
        return 0
    else:
        cur = origin[idx] * pow(r,idx)  
        return cur + make_hash(origin,idx+1) % m


if __name__ == '__main__':
    n = int(sys.stdin.readline())
    target = list(map(lambda elem : ord(elem)-96,sys.stdin.readline().rstrip()))
    
    ans = make_hash(target, 0)
    print(ans)