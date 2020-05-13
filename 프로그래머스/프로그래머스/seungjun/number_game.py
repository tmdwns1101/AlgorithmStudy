'''
Summer / Winter coding 2018
숫자 게임
2020.05.10
'''





def solution(A, B):
    ans = 0
    A = sorted(A)
    B = sorted(B)
   
    aIdx = 0
    bIdx = 0
    n = len(A)
    while aIdx < n and bIdx < n:
        if A[aIdx] < B[bIdx]:
            aIdx += 1 
            bIdx += 1
            ans += 1
        elif A[aIdx] > B[bIdx]:
            bIdx += 1
        else:
            aIdx += 1
    return ans




res = solution([1,2,3], [4,3,3])
print(res)