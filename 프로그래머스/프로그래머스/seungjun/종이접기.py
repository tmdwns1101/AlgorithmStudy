def solution(n):

    dp = [[] for _ in range(n)]
    dp[0] = [0]
    for i in range(1,n):
        dp[i] = dp[i-1] + [0] + list(map(lambda  elem: elem-1 if elem == 1 else elem + 1 , dp[i-1][::-1]))
    
    return dp[n-1]

solution(3)