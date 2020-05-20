def subset_sum(nums, k, sumV, idx):
    if sumV == k:
        return 1
    else:
        ans = 0
        for i in range(idx, len(nums)):
            ans += subset_sum(nums, k, sumV+nums[i], i+1)
        return ans 


T = int(input())

for test_case in range(1, T + 1):
    n,k = list(map(int,input().rstrip().split()))

    nums = list(map(int,input().rstrip().split()))

    ans = subset_sum(nums, k, 0,0)

    print("#{} {}".format(test_case, ans))
   
