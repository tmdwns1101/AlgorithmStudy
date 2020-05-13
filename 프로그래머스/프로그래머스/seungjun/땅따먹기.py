def solution(land):
    ans = 0
    n = len(land)
    dp = [[0] * 4 for _ in range(n)]

    for i in range(4):
        dp[0][i] = land[0][i]
    
    for i in range(1,n):
        for j in range(4):
            dp[i][j] = max(dp[i-1][:j] + dp[i-1][j+1:]) + land[i][j]
    
    ans = max(dp[n-1])

    return ans






