import sys



dx = [0,0,-1,1]
dy = [-1,1,0,0]



def dfs(board, i,j, count, N,M,visited):
    if count == 4:
        return board[i][j]
    
    else:
        sumV = 0
       
        
        for k in range(4):
            nx = j + dx[k]
            ny = i + dy[k]
            if nx >= 0 and nx < M and ny >= 0 and ny < N and visited[ny][nx] == False:
                visited[ny][nx] = True
                
                sumV = max(sumV, board[i][j]+dfs(board, ny, nx, count+1, N, M, visited))
               
                visited[ny][nx] = False

        return sumV

def exception_shape(board,i,j,N,M):

    res = 0
    # ㅗ 의 중심 좌표 기준
    if i >= 1  and j >= 1 and j < M-1:
        res = max(res, board[i-1][j]+board[i][j]+board[i][j-1]+board[i][j+1])
    # ㅏ 의 중심 좌표 기준
    if i >=1 and i < N-1 and j < M-1:
        res = max(res, board[i-1][j]+board[i][j]+board[i+1][j]+board[i][j+1]) 
    # ㅜ 의 중심 좌표 기준
    if j >=0 and i <N-1 and j < M-1:
        res = max(res, board[i][j-1]+board[i][j]+board[i][j+1]+board[i+1][j]) 
    # ㅓ 의 중심 좌표 기준
    if j >= 1 and i >= 1 and i < N-1:
        res = max(res, board[i][j-1]+board[i][j]+board[i-1][j]+board[i+1][j])  
    return res 


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))
    board = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

    ans = 0
    visited = [[False] * 5 for _ in range(5)]
    for i in range(n):
        for j in range(m):
           
            visited[i][j] = True 
            ans = max(ans, dfs(board,i,j,1,n,m,visited))
          
            ans = max(ans, exception_shape(board,i,j,n,m))
           
            visited[i][j] = False 

    print(ans)