def solution(n,k):
    dp = [[0] * (n+1) for _ in range(k+1)]

    for i in range(1,k+1):
        dp[i][0] = 1
    for i in range(1,k+1):
        for j in range(1,n+1):
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000000

    ans = dp[k][n]

    return ans 

n, k = list(map(int,input().rstrip().split()))

res = solution(n,k)

print(res)