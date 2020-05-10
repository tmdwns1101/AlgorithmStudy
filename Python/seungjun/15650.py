from itertools import combinations
import sys

if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    nums = [i for i in range(1,n+1)]
    

    for combination in combinations(nums,m):
        combination = sorted(list(combination))
        
        
        for num in combination:
            print(num, end=' ')
        print()

