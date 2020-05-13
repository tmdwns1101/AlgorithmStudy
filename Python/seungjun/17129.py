import sys
from collections import deque

dx = [0,0,-1,1]
dy = [-1,1,0,0]

def solution(board, n, m):
    temp_board = [[0] * m for _ in range(n)]

    row = 0
    col = 0

    q = deque()
    for i in range(n):
        for j in range(m):
            if board[i][j] == 2:
                row = i
                col = j
                break
    
    q.append({'x': col, 'y': row })
    ans = -1
    while len(q) != 0:
        front = q.popleft()
        col = front['x']
        row = front['y']
        cur = temp_board[row][col]
        if board[row][col] == 3 or board[row][col] == 4 or board[row][col] == 5:
            ans = cur
            break
        for i in range(4):
            nx = col + dx[i]
            ny = row + dy[i]
            if (
                nx >= 0 and nx < m
                and ny >= 0 and ny < n 
                and board[ny][nx] != 1
                and temp_board[ny][nx] == 0  
            ):
                q.append({'x': nx, 'y': ny})
                temp_board[ny][nx] = cur + 1

    return ans



n, m = list(map(int, sys.stdin.readline().rstrip().split()))

board = [list(map(int, sys.stdin.readline().rstrip())) for _ in range(n)]

res = solution(board,n,m)
if res != -1:
    print('TAK')
    print(res)
else:
    print('NIE')



