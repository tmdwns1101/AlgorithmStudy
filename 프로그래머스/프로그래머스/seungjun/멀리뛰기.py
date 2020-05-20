


def solution(n):
    mod = 1234567

    if n == 1:
        return 1
    dp = [0] * (n+1)

    dp[1] = 1
    dp[2] = 2
    
    for i in range(3,n+1):
        dp[i] = (dp[i-1] + dp[i-2]) % mod
    return dp[n]

res = solution(100000)
print(res)