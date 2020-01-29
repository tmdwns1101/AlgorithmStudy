from collections import deque
import sys

dx = [0,0,-1,1]
dy = [-1,1,0,0]

def solution(board,n,m):

    map_board = [[0] * m for i in range(n)]

    q = deque()
    q.append({'row': 0, 'col': 0})
    map_board[0][0] = 1

    while len(q) != 0:
        front = q.popleft()
        row = front['row']
        col = front['col']

        for i in range(4):
            nrow = row + dy[i]
            ncol = col + dx[i]
            if ( nrow >= 0 
                and nrow < n 
                and ncol >= 0 
                and ncol < m 
                and board[nrow][ncol] == '1' 
                and map_board[nrow][ncol] == 0) :

                q.append({'row':nrow, 'col':ncol})
                map_board[nrow][ncol] = map_board[row][col] + 1
                if nrow == n -1 and ncol == m - 1:
                    break
    
    return map_board[n-1][m-1] 
    









if __name__ == '__main__':
    n,m = list(map(int,sys.stdin.readline().rstrip().split()))
    board = [list(sys.stdin.readline()[:-1]) for i in range(n)]
    
    ans = solution(board, n, m)
    print(ans)



