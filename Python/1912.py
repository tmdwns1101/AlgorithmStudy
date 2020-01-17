def solution(n, nums):
    dp = [0 for i in range(len(nums)]
    maxValue = -1000
    dp[0] = nums[0]
    for i in range(1,len(nums)):
        dp[i] = max(nums[i], dp[i-1] + nums[i])
        maxValue = max(dp[i], maxValue)

    maxValue = max(maxValue, dp[0])
    return maxValue




if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, input().rstrip().split()))
    ans = solution(n, nums)
    print(ans)