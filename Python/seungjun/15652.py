import sys 



def make_sequence(nums, m, comb, count):
    if count == m:
        for i in range(m):
            print(comb[i], end=' ')
        print()
        return 
    else:

        for i in range(len(nums)):
            comb.append(nums[i])
            make_sequence(nums[i:], m, comb, count+1)
            comb.pop()


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    nums = [i for i in range(1,n+1)]
    
    comb = []
    make_sequence(nums,m,comb, 0)
