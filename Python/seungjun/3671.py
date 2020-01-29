from itertools import combinations, permutations

'''
에라토스의 체를 이용한 소수 구하기
'''
MAX = 10000000

primes = [True, True] +  [False for i in range(2,MAX)]

for i in range(2,MAX):
    if primes[i] == False:
        for j in range(2*i,MAX, i):
            primes[j] = True


def solution(nums):

    ans = []
    for i in range(1,len(nums)+1):
        nums_comb = combinations(nums, i)

        for comb in nums_comb:
            for per in permutations(comb):
                
                bind_num = int("".join(list(per)))
                print(bind_num)
                if primes[bind_num] == False:
                    ans.append(bind_num)
    
    return len(set(ans))


if __name__ == '__main__':
    test_case = int(input())
    for i in range(test_case):
        nums = list(input())
        print(solution(nums))