'''
import sys


max_value = 0
count = 0
def solution(inputs, bounds,idx, weight, value, k,n):
    global max_value
    global count
    if weight < k and idx < len(inputs) and max_value < value + bounds[n]-bounds[idx]:
        
        count += 1
        
    
        current_value , current_weight = inputs[idx]
        current_value = -current_value

      

        next_weight = weight + current_weight
        next_value = value + current_value
    
        max_value =  next_value if next_weight <= k and next_value > max_value else max_value
    

        solution(inputs, bounds, idx+1, next_weight, next_value, k,n)
    
        solution(inputs, bounds, idx+1, weight, value, k,n)


n, k = list(map(int, sys.stdin.readline().rstrip().split()))

inputs = []
bounds = [0]

for i in range(n):
    w, v = list(map(int, sys.stdin.readline().rstrip().split()))
    inputs.append((-v,w))
    
inputs = sorted(inputs)

for i in range(1,n+1):
    
    current = bounds[i-1] + (-inputs[i-1][0])
    bounds.append(current)

solution(inputs,bounds,0,0,0,k,n)

print(max_value)
'''

import sys 

n, k = n, k = list(map(int, sys.stdin.readline().rstrip().split()))

bags = [tuple(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

knaps = [0] * (k+1)

for i in range(n):
    for j in range(k,1,-1):
        if bags[i][0] <= j:
            knaps[j] = max(knaps[j], knaps[j-bags[i][0]]+bags[i][1])
print(knaps[k])