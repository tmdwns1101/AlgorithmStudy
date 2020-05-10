'''
import sys



def find_equal_upper(nums, target):

    left = 0
    right = len(nums)
    
    while left < right:
        mid = (left + right) // 2

        if nums[mid] <= target:
            left = mid + 1
        else:
            right = mid 
    return right

def find_equal_lower(nums, target):
    
    left = 0
    right = len(nums)
    
    while left < right:
        mid = (left + right) // 2

        if nums[mid] < target:
            left = mid + 1
        else:
            right = mid
    
    return right



def count_zero_pair(a_pairs, b_pairs):

    count = 0

    for a_pair in a_pairs:
       
        upper = find_equal_upper(b_pairs,a_pair)
        lower = find_equal_lower(b_pairs, a_pair)
      
        count += (upper - lower)
    
    return count


if __name__ == '__main__':
    n = int(input())
    
    A = [0] * n
    B = [0] * n
    C = [0] * n
    D = [0] * n
    
    for i in range(n):
        A[i], B[i], C[i], D[i] = list(map(int, sys.stdin.readline().rstrip().split()))

    group = [[],[]]

    for i in range(n):
        for j in range(n):
            group[0].append(A[i]+B[j]) 

    for i in range(n):
        for j in range(n):
            group[1].append(-(C[i]+D[j])) 
           
    
    
    group[1].sort()
    
   
    res = count_zero_pair(group[0], group[1])
    

    print(res)

'''
from collections import Counter
import sys
if __name__ == '__main__':
    n = int(input())
    
    A = [0] * n
    B = [0] * n
    C = [0] * n
    D = [0] * n
    
    for i in range(n):
        A[i], B[i], C[i], D[i] = list(map(int, sys.stdin.readline().rstrip().split()))
    
    cd = Counter()
    for c in C:
        for d in D:
            cd[c+d] += 1
    res = 0
    for a in A:
        for b in B:
            res += cd[-a-b] 
            
    

    print(res)