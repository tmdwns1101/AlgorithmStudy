#20.01.17

import queue

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def solution(board, n, m):
    q = queue.Queue()
    for i in range(n):
        for j in range(m):
            if board[i][j] == 1:
                q.put({
                    'x': i,
                    'y': j,
                    'date': 0
                })
                
    date = 0

    while not q.empty():
        front = q.get()
        x = front['x']
        y = front['y']
        date = front['date']
        

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx >=0 and nx < n and ny >= 0 and ny < m and board[nx][ny] == 0:
                board[nx][ny] = 1
                q.put({'x': nx, 'y': ny, 'date': date+1})

                
    
    for i in range(n):
        for j in range(m):
            if board[i][j] == 0:
                return -1
    

    return date 




if __name__ == '__main__':
    m, n = list(map(int, input().rstrip().split()))
    board = []

    for i in range(n):
        board.append(list(map(int, input().rstrip().split())))
    
    ans = solution(board, n, m)
    print(ans)