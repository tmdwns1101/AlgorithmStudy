import sys


MaxValue = -1000000000
MinValue = 1000000000


def dfs(nums, plus, minus, mul, div, sum, cnt, n):
    if cnt == n:
        global MaxValue 
        global MinValue
        MaxValue = max(MaxValue, sum)
        MinValue = min(MinValue, sum)
    
    if plus > 0:
        dfs(nums, plus-1, minus, mul, div, sum+nums[cnt], cnt+1, n)
    if minus > 0:
        dfs(nums, plus, minus-1, mul, div, sum-nums[cnt], cnt+1, n)
    if mul > 0:
        dfs(nums, plus, minus, mul-1, div, sum*nums[cnt], cnt+1, n)
    if div > 0:
        dfs(nums, plus, minus, mul, div-1, int(sum /nums[cnt]), cnt+1, n)


   

if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, sys.stdin.readline().rstrip().rsplit()))
    opers = list(map(int, sys.stdin.readline().rstrip().rsplit()))

    dfs(nums, 
        plus=opers[0], 
        minus=opers[1], 
        mul=opers[2], 
        div=opers[3], 
        sum=nums[0],
        cnt=1,
        n=n
        )

    print(MaxValue)
    print(MinValue)