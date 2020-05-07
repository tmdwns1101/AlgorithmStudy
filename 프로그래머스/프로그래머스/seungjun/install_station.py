'''
Summer Coding 2018
기지국 설치
20.05.08
'''
def solution(n, stations, w):
    
    ans = 0
    
    
    if len(stations) == 1:
        if stations[0] - w - 1 > 0:
                ans +=  (stations[0] - w - 1) // (2*w+1)
                if (stations[0] - w - 1) % (2*w+1) > 0:
                    ans += 1
        if stations[0] + w < n:
                ans +=  (n - (stations[0] + w) ) // (2*w+1)
                if  (n - (stations[0] + w) ) % (2*w+1) > 0:
                    ans += 1
    elif len(stations) == 2:
        if stations[0] - w - 1 > 0:
                ans +=  (stations[0] - w - 1) // (2*w+1)
                if (stations[0] - w - 1) % (2*w+1) > 0:
                    ans += 1
        if stations[1] + w < n:
                ans +=  (n - (stations[1] + w) ) // (2*w+1)
                if  (n - (stations[1] + w) ) % (2*w+1) > 0:
                    ans += 1
        lminV = stations[0] + w 
        lmaxV = stations[1] - w
        
        if lmaxV - lminV - 1 > 0:
            ans +=  (lmaxV - lminV - 1) // (2*w + 1)
            if (lmaxV - lminV - 1) % (2*w + 1) > 0:
                ans += 1
       
    else:
        for i in range(len(stations)):

            if i == 0:
                if stations[i] - w - 1 > 0:
                    ans +=  (stations[i] - w - 1) // (2*w+1)
                    if (stations[i] - w - 1) % (2*w+1) > 0:
                        ans += 1
        
            if i == len(stations)-1:
                lminV = stations[i-1] + w 
                lmaxV = stations[i] - w
               
                if lmaxV - lminV - 1 > 0:
                    ans +=  (lmaxV - lminV - 1) // (2*w + 1)
                    if (lmaxV - lminV - 1) % (2*w + 1) > 0:
                        ans += 1
                if stations[i] + w < n:
                    ans +=  (n - (stations[i] + w) ) // (2*w+1)
                    if  (n - (stations[i] + w) ) % (2*w+1) > 0:
                        ans += 1

            if i != 0 and i != len(stations)-1:
                lminV = stations[i-1] + w 
                lmaxV = stations[i] - w
               
                if lmaxV - lminV - 1 > 0:
                    ans +=  (lmaxV - lminV - 1) // (2*w + 1)
                    if (lmaxV - lminV - 1) % (2*w + 1) > 0:
                        ans += 1
                
    return ans



res = solution(16, [1,2,3,4,5,6], 2)
print(res)

