import sys
from collections import deque


dx = [0,0,-1,1]
dy = [-1,1,0,0]

def solution(board, n, is_patient, poses):
    '''
    This Func use BFS Algorithm 

    board : n x n list,  R, G, B
    is_patient : boolean, if patient is True not False
    poses: it has all R, G, B position tuple(xpos, ypos) list. poses[0] = R poses, poses[1] = G poses, poses[2] = B poses 
    '''
    visited = [[False] * n for _ in range(n)]

    color = ['R', 'G', 'B']   
   
    q = deque()
    count = 0
    
    
    for i in range(3):
        pos = poses[i]
        
       
        for j in range(len(pos)):
           
            
            if visited[pos[j][0]][pos[j][1]] == False:
                count += 1
                visited[pos[j][0]][pos[j][1]] = True
                q.append({
                    'pos': pos[j],
                    'color': color[i]
                })

                while len(q) != 0:
                    front = q.popleft()
                    x = front['pos'][1]
                    y = front['pos'][0]
                    cur_color = front['color']

                    for k in range(4):
                        nx = x + dx[k]
                        ny = y + dy[k]

                        if nx >= 0 and nx < n and ny >= 0 and ny < n and visited[ny][nx] == False:
                            if board[ny][nx] == cur_color or (is_patient == True and  board[ny][nx] != 'B'): 
                                q.append({
                                    'pos': (ny, nx),
                                    'color': board[ny][nx]
                                })
                                visited[ny][nx] = True
    return count            



if __name__ == '__main__':
    n = int(input())

    board = [list(sys.stdin.readline().rstrip()) for _ in range(n)]

    poses = [[] for _ in range(3)]

    for i in range(n):
        for j in range(n):
            if board[i][j] == 'R':
                idx = 0
            elif board[i][j] == 'G':
                idx = 1
            else:
                idx = 2
            
            poses[idx].append((i,j))
    
  
    is_not_patient = solution(board,n,False,poses)
    is_patient = solution(board,n,True, poses)

    print(is_not_patient, is_patient)
            
            






        



