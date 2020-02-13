import sys
from collections import deque 

def solution(graph,n):
    checker = [False] * n

    q = deque()
    ans = 0
    for i in range(n):
        if checker[i] == False:
            ans += 1
            checker[i] = True 
            
            for j in range(len(graph[i])):
                
                q.append(graph[i][j])
                checker[graph[i][j]] = True
                
         
            while len(q) != 0:
                front = q.popleft()
                for k in range(len(graph[front])):
                    if checker[graph[front][k]] == False:
                        q.append(graph[front][k])
                        checker[graph[front][k]] = True
    return ans 


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))
    graph = [[] for _ in range(n)]
    for i in range(m):
        st, ed = list(map(lambda elem: int(elem)-1, sys.stdin.readline().rstrip().split()))
        graph[st].append(ed)
        graph[ed].append(st)
   
    res = solution(graph,n)
    print(res)