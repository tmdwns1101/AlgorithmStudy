import sys 
from heapq import heappop, heappush

INF = 60000000000 

#Using Dijkstra Algorithm
def find_path(start, graph,v):
    heap = []
    dist = [INF] * (v+1)
   
    dist[start] = 0

    heappush(heap,(0,start))

    while len(heap) != 0:
        weight, now = heappop(heap)

        if dist[now] < weight:
            continue

        for w, next_v in graph[now]:
            next_weight = weight + w 

            if next_weight < dist[next_v]:
                dist[next_v] = next_weight
                heappush(heap,(next_weight, next_v))

    return dist





if __name__ == '__main__':
    v,e = list(map(int, sys.stdin.readline().rstrip().split())) 
    st = int(input())
   
    

    graph = [[] for _ in range(v+1)]

   
    
    for i in range(e):
        a, b, w = list(map(int, sys.stdin.readline().rstrip().split())) 
        graph[a].append((w,b))

    res = find_path(st,graph,v)

    for i in range(1,v+1):
        if res[i] == INF:
            print("INF")
        else:
            print(res[i])