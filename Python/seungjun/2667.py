#20.01.17

import queue

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def calc(board, x, y, complex_count, complexes):
    q = queue.Queue()
    q.put({
        'x': x,
        'y': y
    })
    board[x][y] = '0'
    while not q.empty():
        front = q.get()
        x = front['x']
        y = front['y']
        complexes[complex_count] += 1
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx >= 0 and nx < len(board) and ny >=0 and ny <len(board[0]) and board[nx][ny] == '1':
                q.put({'x': nx, 'y': ny})
                board[nx][ny] = '0'
                
               
def soultion(board):
    complex_count = 0
    complexes = []
    for i in range(len(board)):
        for j in range(len(board)):
       
            if board[i][j] != '0':
                complexes.append(0)
                calc(board, i, j, complex_count, complexes)
                complex_count += 1
    
    complexes = sorted(complexes)

    return complex_count, complexes

if __name__ == '__main__':
    n = int(input())
    board = []
    for i in range(n):
        board.append(list(input()))

    complex_count, complexes = soultion(board)
    print(complex_count)
    for i in range(len(complexes)):
        print(complexes[i])