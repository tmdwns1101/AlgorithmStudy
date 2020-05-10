import sys

def solution(stairs, n):
    dp = [0] * (n+1)

    dp[1] = stairs[0]
    
    for i in range(2,n+1):
        dp[i] = stairs[i-1] + max(dp[i-2],  dp[i-3] + stairs[i-2])
    print(dp)
    print(dp[n])    

if __name__ == '__main__':

    n = int(input())
    stairs = [int(sys.stdin.readline().rstrip()) for _ in range(n)]
    solution(stairs, n)