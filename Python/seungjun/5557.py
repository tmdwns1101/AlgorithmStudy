import sys

def getNumberOfCase(nums,n):
    dp = [[0]* 21 for _ in range(n)]

    dp[1][nums[0]] = 1

    for i in range(2,n):
        for j in range(21):
            
            if dp[i-1][j] != 0:
                if j + nums[i-1] <= 20:
                    dp[i][j+nums[i-1]] += dp[i-1][j]
                if j - nums[i-1] >= 0:
                    dp[i][j - nums[i-1]] += dp[i-1][j]
    
    return dp[n-1][nums[-1]]


n = int(input())

nums = list(map(int,sys.stdin.readline().rstrip().split()))

ans = getNumberOfCase(nums,n)

print(ans)