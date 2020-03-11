import sys 



def make_sequence(nums, m, comb, count):
    if count == m:
        for i in range(m):
            print(comb[i], end=' ')
        print()
        return 
    else:

        for i in range(len(nums)):
            if comb.count(nums[i]) == 0:
                comb.append(nums[i])
                make_sequence(nums, m, comb, count+1)
                comb.pop()


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    nums = sorted(list(map(int,sys.stdin.readline().rstrip().split())))

    comb = []
    make_sequence(nums,m,comb, 0)
