#20.01.17
import sys
from collections import deque

# 상 하 좌 우 다이렉션
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

def solution(board, n, m):
    q = deque()
    un_riped_tomatoes = 0  #안 익은 토마토 갯수

    # 익은 과일의 위치를 queue에 삽입 및 안 익은  토마토 갯수 설정
    for i in range(n):
        for j in range(m):
            if board[i][j] == 1:
                q.append({
                    'row': i,
                    'col': j,
                    'date': 0
                })
            if board[i][j] == 0:
                un_riped_tomatoes += 1
                
    date = 0

    '''
    로직 설명
    1. 큐가 빌 때까지 while 문 진행.
    2. item 을 하나 씩 queue에서 빼냄.
    3. 현재 item의 위치에서 상, 하, 좌, 우 위치에 안 익은 과일 탐색
    4. 안 익은 과일이면, 익게 만들고, 현재 날짜에 +1 을 한 후, 위치와 함께 큐에 삽입 
        및 안 익은 과일 개수 감소
    '''
    #1
    while len(q) != 0:
 
        #2
        front = q.popleft()

        row = front['row']
        col = front['col']
        date = front['date']
        
        #3
        for i in range(4):
            ny = row + dy[i]
            nx = col + dx[i]

            if nx >= 0 and nx < m and ny >= 0 and ny < n and board[ny][nx] == 0:
                #4
                board[ny][nx] = 1
                q.append({'row': ny, 'col': nx, 'date': date+1})
                un_riped_tomatoes -= 1

                
    # 안 익은 과일이 있는지 탐색
    if un_riped_tomatoes == 0:
        return date
    else:
        return -1
    



if __name__ == '__main__':
    m, n = list(map(int, input().rstrip().split()))
    board = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

    ans = solution(board, n, m)
    print(ans)