def solution(wines):
    dp = [0 for i in range(len(wines)+1)]
    if len(wines) <= 1:
        return wines[0]
    if len(wines) <= 2:
        return wines[0] + wines[1]
    
    dp[1] = wines[0]
    dp[2] = dp[1] + wines[1]

    for i in range(2,len(wines)):
        # dp[i] = max(dp[i-2] + a[i], dp[i-3]+ a[i-1] + a[i], dp[i-1])
        dp[i+1] = max(dp[i-1]+wines[i], dp[i-2] + wines[i-1] + wines[i], dp[i]) 
        
    
    return dp[len(wines)]

if __name__ == '__main__':
    n = int(input())
    wines = []
    for i in range(n):
        wine = int(input())
        wines.append(wine)
    ans = solution(wines)
    print(ans)