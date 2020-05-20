def solution(N):
    answer = 0
    dp = [0] * (N+1)

    dp[1] = 1
    dp[2] = 1

    for i in range(3,N+1):
        dp[i] = dp[i-1] + dp[i-2]

    answer = dp[N] *2 + (dp[N] + dp[N-1]) * 2 
    return answer