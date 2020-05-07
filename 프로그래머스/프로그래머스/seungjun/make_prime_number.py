from itertools import combinations


primeNum = [False] * 3000


for i in range(2,3000):
    if primeNum[i] is False:
        
        for j in range(i+i, 3000,i):
            primeNum[j] = True
            


def solution(nums):
    
    ans = 0

    for comb in combinations(nums,3):
        numList = list(comb)
        num = numList[0] + numList[1] + numList[2]
        if primeNum[num] == False:
            
            ans += 1
    
    return ans 


if __name__ == '__main__':

    res = solution([1,2,7,6,4])
    print(res)