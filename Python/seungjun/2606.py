import sys
from collections import deque 

def solution(graph,n):
    checker = [False] * n

    q = deque()
    ans = 0
    checker[0] = True
    
            
    for i in range(len(graph[0])):
        if checker[graph[0][i]] == False:   
            q.append(graph[0][i])
            checker[graph[0][i]] = True
              
         
            while len(q) != 0:
                front = q.popleft()
                ans += 1  
                for k in range(len(graph[front])):
                    if checker[graph[front][k]] == False:
                        q.append(graph[front][k])
                        checker[graph[front][k]] = True
            
    return ans 


if __name__ == '__main__':
    n = int(input())
    m = int(input())

    graph = [[] for _ in range(n)]
    for i in range(m):
        st, ed = list(map(lambda elem: int(elem)-1, sys.stdin.readline().rstrip().split()))
        graph[st].append(ed)
        graph[ed].append(st)
   
    res = solution(graph,n)
    print(res)