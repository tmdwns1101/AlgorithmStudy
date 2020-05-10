import sys 

def lower_bound(ary, t):
    left = 0
    right = len(ary)

    idx = 0
    while left <= right:
        mid = (left+right) // 2

        if ary[mid] >= t:
            right = mid - 1
            idx = mid
        else:
            left = mid + 1 
    return idx

def LIS(nums):

    sub = []

    for num in nums:
        if len(sub) == 0:
            sub.append(num)
        else:
            if sub[-1] < num:
                sub.append(num)
            else:
                idx = lower_bound(sub,num)
                sub[idx] = num 
    
    return sub

if __name__ == '__main__':
    n = int(input())
    nums = list(map(int, sys.stdin.readline().rstrip().split()))

    lis = LIS(nums)
    print(len(lis))