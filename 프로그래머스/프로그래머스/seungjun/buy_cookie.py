'''
Summer Coding 2018
쿠키 구입
20.05.10
'''


def solution(cookie):

    
    maxCookie= 0
    for i in range(len(cookie)-1):
        leftSum = cookie[i]
        leftIdx = i

        rightSum = cookie[i+1]
        rightIdx = i+1

        while True:

            if leftSum == rightSum:
                maxCookie = max(maxCookie, leftSum)
            
            if leftIdx > 0 and leftSum <= rightSum:
                leftIdx -= 1
                leftSum += cookie[leftIdx]
            
            elif rightIdx < len(cookie) - 1 and leftSum >= rightSum:
                rightIdx += 1
                rightSum += cookie[rightIdx]
            else:
                break 
    
    return maxCookie

