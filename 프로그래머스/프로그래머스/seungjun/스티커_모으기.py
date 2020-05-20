'''
Summer/Winter Coding 2018
스티커 모으기 (2)
20.05.20 
level 4
'''


def solution(sticker):

    ans = 0
    n = len(sticker)
    dp = [0] * n 

    dp[0] = sticker[0]
    dp[1] = sticker[0]

    for i in range(2, n):
        dp[i] = max(dp[i-2]+ sticker[i], dp[i-1])
    
    ans = dp[n -2]

    for i in range(len(dp)):
        dp[i] = 0

    dp[0] = 0
    dp[1] = sticker[1]

    for i in range(2, n):
        dp[i] = max(dp[i-2]+ sticker[i], dp[i-1])

    ans = max(ans, dp[n-1])
    return ans 


res = solution([14, 6, 5, 11, 3, 9, 2, 10])
print(res)