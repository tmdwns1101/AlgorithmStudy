import sys

INF = 100000


def solution(graph, n):

    for k in range(n): # 거치는 노드
        for i in range(n): #출발 노드
            for j in range(n): #도착 노드
                if graph[i][k] + graph[k][j] < graph[i][j]:
                    graph[i][j] = graph[i][k] + graph[k][j]


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    graph = [[INF]*n for _ in range(n)]
    
    
    for i in range(n):
        graph[i][i] = 0

    
    for i in range(m):
        start , end = list(map(int, sys.stdin.readline().rstrip().split())) 
        graph[start-1][end-1] = 1
        graph[end-1][start-1] = 1
    
    solution(graph, n)


    minV = INF
    ans = -1

    print(graph)
    
    for i in range(n):
        sumV = sum(graph[i])
        if sumV < minV:
            ans = i+1
            minV = sumV

       

    print(ans)