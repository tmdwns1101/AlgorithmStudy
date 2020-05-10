import sys
from collections import deque

dfs_visited = [False] * 1001
bfs_visited = [False] * 1001


def dfs(graph, v):

    dfs_visited[v] = True
    print(v, end=' ')
    for i in range(1,len(graph[v-1])):  
        if dfs_visited[graph[v-1][i]] == False:
            dfs(graph, graph[v-1][i])
  

def bfs(graph, v):

    q = deque()
    for i in range(len(graph[v-1])):
        q.append(graph[v-1][i])
        bfs_visited[graph[v-1][i]] = True
       

    while len(q) != 0:
        front = q.popleft()
        print(front, end=' ')
        

        for i in range(len(graph[front-1])):
            if bfs_visited[graph[front-1][i]] == False:
                q.append(graph[front-1][i])
                bfs_visited[graph[front-1][i]] = True

if __name__ == '__main__':
    n, m, v = list(map(int, sys.stdin.readline().rstrip().split()))
    graph = [[i+1] for i in range(n)]


    for i in range(m):
        st, ed = list(map(int, sys.stdin.readline().rstrip().split()))
        graph[st-1].append(ed)
        graph[ed-1].append(st)
    
    for i in range(n):
        graph[i] = graph[i][0:1] + sorted(graph[i][1:])
        
  
    dfs(graph, v)
    print()
    bfs(graph, v)
