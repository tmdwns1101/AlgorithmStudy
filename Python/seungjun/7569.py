from collections import deque
import sys

dx = [0,0,-1,1,0,0]
dy = [-1,1,0,0,0,0]
dz = [0,0,0,0,-1,1]



def solution(board,m,n,h):
    q = deque()
    un_riped_tomatoes_cnt = 0
    for i in range(h):
        for j in range(n):
            for k in range(m):
                if board[i][j][k] == 1:
                    q.append({
                    'x': k,
                    'y': j,
                    'z': i,
                    'day': 0
                    })
                if  board[i][j][k] == 0:
                    un_riped_tomatoes_cnt += 1

    
   
    ans = 0
 
    while len(q) != 0:
        front  = q.popleft()
        x = front['x']
        y = front['y']
        z = front['z']
        day = front['day']
        ans = day if day > ans else ans 
        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]
            if (
                nx >= 0 and nx < m
                and ny >=0 and ny <n 
                and nz >=0 and nz < h
                and board[nz][ny][nx] == 0 
            ):
               
                un_riped_tomatoes_cnt -= 1
                board[nz][ny][nx] = 1
                q.append({
                    'x': nx,
                    'y': ny,
                    'z': nz,
                    'day': day + 1
                })
    
    if un_riped_tomatoes_cnt != 0:
        return -1
    else:
        return ans


if __name__ == '__main__':
    m, n, h = list(map(int, input().rstrip().split()))

    board = []
    for i in range(h):
        board.append([list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)])
    
    
    res = solution(board,m,n,h)
    print(res)