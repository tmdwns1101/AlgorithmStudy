import copy
from itertools import combinations

dx = [-1,1,0,0]
dy = [0,0,-1,1]

def spread_virus(fiexd_map, virus_zones, n, m):
    
    spread_virus_count = -len(virus_zones)

    while virus_zones:
        top = virus_zones.pop()
        x = top['x']
        y = top['y']
        spread_virus_count += 1
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < n and nx >= 0 and ny < m and ny >= 0 and fiexd_map[nx][ny] == 0:
                virus_zones.append({'x': nx, 'y': ny})
                fiexd_map[nx][ny] = 2
    
    return spread_virus_count 


def solution(map_board, n, m):
    
    safe_zones = []
    virus_zones = []

    for i in range(n):
        for j in range(m):
            if map_board[i][j] == 0:
                safe_zones.append({
                    'x': i,
                    'y': j
                })
            if map_board[i][j] == 2:
                virus_zones.append({
                    'x': i,
                    'y': j
                })

    safe_zones_count = len(safe_zones)
    
    walls_combine = combinations(safe_zones, 3)

    max_safe_zones = 0
    temp_board = copy.deepcopy(map_board)

    for walls in walls_combine:
        
        for wall in walls:
            x = wall['x']
            y = wall['y']
            temp_board[x][y] = 1
        copy_virus_zones = copy.deepcopy(virus_zones)
        copy_temp_board = copy.deepcopy(temp_board)
        cur_safe_zone_count = safe_zones_count - spread_virus(copy_temp_board, copy_virus_zones, n, m)
        if max_safe_zones < cur_safe_zone_count:
            max_safe_zones = cur_safe_zone_count
        for wall in walls:
            x = wall['x']
            y = wall['y']
            temp_board[x][y] = 0
    return max_safe_zones -3
    
if __name__ == '__main__':
    n, m = list(map(int, input().rstrip().split()))
    map_board = []
    for i in range(n):
        map_board.append(list(map(int, input().rstrip().split())))  
    ans = solution(map_board, n, m)
    print(ans) 