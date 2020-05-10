
MAX = 101

def solution(n):
    dp = [[0] * 10 for _ in range(MAX)]

    for i in range(10):
        dp[1][i] = 1

    for i in range(2,n+1):
        for j in range(0,10):
            if j == 0:
                dp[i][j] = dp[i-1][1]
            elif j== 9:
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]

            dp[i][j] = dp[i][j] % 1000000000
    
    
    return sum(dp[n][1:]) % 1000000000


n = int(input())

ans = solution(n)
print(ans)