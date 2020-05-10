import sys
from collections import deque


dx = [0,0,-1,1]
dy = [-1,1,0,0]

MAX_DIST = 401
MAX_POS = 21


def bfs(board,x,y,n,shark_size):
    check = [[-1] * n for _ in range(n)]
    min_value = MAX_DIST
    min_x = MAX_POS
    min_y = MAX_POS

    q = deque()
    q.append({'x': x, 'y': y})
    check[y][x] = 0

    while len(q) != 0:
        front = q.popleft()
        x = front['x']
        y = front['y']

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
           
            if (
                nx >= 0 and nx < n
                and ny >= 0 and ny < n 
                and check[ny][nx] == -1 and board[ny][nx] <= shark_size
            ):
                check[ny][nx] = check[y][x] + 1

                q.append({'x': nx, 'y': ny})
                
                if board[ny][nx] < shark_size and board[ny][nx] != 0:

                    if min_value > check[ny][nx]:
                        min_value = check[ny][nx]
                        min_x = nx
                        min_y = ny
                    elif min_value == check[ny][nx]:

                        if min_y == ny:
                            if min_x > nx:
                                min_x = nx
                        elif min_y > ny:
                            min_y = ny
                            min_x = nx
                        else:
                            min_y = min_y
                            min_x = min_x
  
    return min_value, min_y, min_x



if __name__ == '__main__':
    #n = int(sys.stdin.readline().rstrip())
    n = int(input())
    board = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

    shark_size = 2
    shark_xpos = 0
    shark_ypos = 0
    for i in range(n):
        for j in range(n):
            if board[i][j] == 9:
                shark_xpos = j
                shark_ypos = i
                board[i][j] = 0
    
    res = 0
    
    eat_cnt = 0

    while True:

        minV, next_y, next_x = bfs(board,shark_xpos,shark_ypos,n,shark_size)
        
        
        if next_x != MAX_POS and next_y != MAX_POS:
            res += minV
            eat_cnt += 1
            
            if eat_cnt == shark_size:
                shark_size += 1
                eat_cnt = 0
            
            shark_xpos = next_x
            shark_ypos = next_y
            board[next_y][next_x] = 0
        
        else:
            break

        
        
    
    print(res)
                      