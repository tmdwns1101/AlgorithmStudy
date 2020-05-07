def solution(N, roads, K):
    answer = 0
    INF = 100000
    check = [False] * 51
    village_map = [[INF] * 51 for _ in range(51)]
    
    for i in range(51):
        for j in range(51):
            if i == j:
                village_map[i][j] = 0
                
    for road in roads:
        nodeA, nodeB, cost = road
        if village_map[nodeA][nodeB] > cost:
            village_map[nodeA][nodeB] = cost
            village_map[nodeB][nodeA] = cost
    node_count = 0
    while node_count < N:
        min_cost = INF
        
        for i in range(1,N+1):
            if village_map[1][i] < min_cost and check[i] == False:
                min_cost = village_map[1][i]
                min_node = i
        
        check[min_node] = True
        node_count += 1

        for i in range(1,N+1):
            if village_map[1][i] > village_map[1][min_node] + village_map[min_node][i]:
                village_map[1][i] = village_map[1][min_node] + village_map[min_node][i]


    
    
    for i in range(1,N+1):
        if village_map[1][i] <= K:
            answer += 1
    
    
    return answer


res = solution(6,[[1,2,1],[1,3,2],[2,3,2],[3,4,3],[3,5,2],[3,5,3],[5,6,1]],4)
print(res)