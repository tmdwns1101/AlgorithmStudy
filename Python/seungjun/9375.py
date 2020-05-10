import sys

def solution(clothes):

    check = {}
   
    for i in range(len(clothes)):
        name, kind = clothes[i]
        if list(check.keys()).count(kind) == 0:
            check[kind] = 1

        else:
            check[kind] += 1
    
    
   
    
    values = list(check.values())
    
    ans = 1
    for value in values:
        ans *= (value+1)
    return ans - 1

if __name__ == '__main__':
    tc = int(input())

    for _ in range(tc):
        n = int(sys.stdin.readline().rstrip())
        clothes = [list(sys.stdin.readline().rstrip().split()) for _ in range(n)]
        
        res = solution(clothes)
        print(res)