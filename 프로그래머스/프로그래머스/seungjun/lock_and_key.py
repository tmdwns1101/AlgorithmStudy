'''
kAKAO Recruitment 2020

자물쇠와 열쇠
2020.05.10
'''
from copy import deepcopy
def make_expend_lock(lock: list):
    m = len(lock)

    expend_lock =[[0] * 3*m for _ in range(3*m)]

    for i in range(m):
        for j in range(m):
            expend_lock[i+m][j+m] = lock[i][j]
    
    return expend_lock

def solution(key: list, lock: list):
    
    
    n = len(key)
    m = len(lock)

    

    keys = []
    
   
  
    for k in range(4):
        rotate = [[0] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                rotate[j][n-1-i] = key[i][j]
        key = rotate
        keys.append(rotate)
    
  
   
    
    expend_lock = make_expend_lock(lock)
    
    for r in range(4):
        current_key = keys[r]
        for i in range(3*m-n+1):
            for j in range(3*m-n+1):
                
                for k in range(n):
                    for l in range(n):
                        expend_lock[i+k][j+l] += current_key[k][l]
                
                
                if  sum(list(map(lambda row: row[m:2*m].count(1), expend_lock[m:2*m]))) == m*m:
                    
                    return True

                expend_lock = make_expend_lock(lock)

    
    
    return False


key = [[0, 0, 0], [1, 0, 0], [0, 1, 1]]
lock = [[1, 1, 1], [1, 1, 0], [1, 0, 1]]


solution(key, lock)

