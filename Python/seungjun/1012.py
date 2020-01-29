from collections import deque
import sys 


dy = [0,0,-1,1]
dx = [-1,1,0,0]

def bfs(farm,col,row,n,m):
    
    q = deque()
    q.append({'row': row, 'col': col})
    
    while len(q) != 0:
        front = q.popleft()
        row = front['row']
        col = front['col']
      
        
       

        for i in range(4):
            n_row = row + dx[i]
            n_col = col + dy[i]

            if (
                n_row >= 0
                and n_row < n
                and n_col >= 0
                and n_col < m
                and farm[n_row][n_col] == 1
            ):
                q.append({'row': n_row, 'col': n_col})
                farm[n_row][n_col] = 0


   

if __name__ == '__main__':
    test_case = int(input())
    farm = [[0] *  51 for _ in range(51)]
    for i in range(test_case):
        m, n, cabbage_count = list(map(int, sys.stdin.readline().rstrip().split()))
       
        cabbages = []
        for i in range(cabbage_count):
            col, row  = list(map(int, sys.stdin.readline().rstrip().split()))
            farm[row][col] = 1
            cabbages.append([row,col])
        
        
        cnt = 0
        for cabbage in cabbages:
            row, col = cabbage
            if farm[row][col] == 1:
                farm[row][col] = 0
                cnt += 1
                bfs(farm,col,row,n,m)
        
        print(cnt)
        

            
            