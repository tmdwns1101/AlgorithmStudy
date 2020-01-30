import sys

'''
Parms

board : 로봇번호및 방향
target : 명령을 내릴 로봇 좌표.
action : 명령어 종류
count : 명렬 횟수

Return 

code 딕션너리 object
1.
{
    code : 1
}
2.
{
    code : 2,
    x : x
}
3.
{
    code : 3,
    x: x,
    y: y
}
'''
dx = [0,1,0,-1]
dy = [-1,0,1,0]

global robots
robots = []


def solution(board, target, action, count, row, col):
    x, y = target['x'], target['y']
    robot = board[y][x]['robot']
    direction = board[y][x]['direct'] 
    
    code = 1
    nx = x
    ny = y 
    crashed_robot = -1

    if action == 'L': 
        direction =  direction - (count % 4)  
        direction = direction + 4 if direction <= 0 else direction
        
       
    elif action == 'R':
        direction = direction + (count % 4)
        direction =  direction- 4 if direction > 4 else direction
       
       
    else:
        for i in range(count):
            nx = nx + dx[direction-1]
            ny = ny + dy[direction-1]
            if nx < 0 or ny < 0 or nx >= col or ny >= row:
                code = 2
                break
            elif board[ny][nx] != 0:
                code = 3
                crashed_robot = board[ny][nx]['robot']
                break
            else:
                nx = nx
                ny = ny
    
    if code == 1:
        if nx != x or ny != y:
            board[y][x] = 0
            robots[robot-1] = {'x': nx, 'y': ny}

        board[ny][nx] = {'robot': robot, 'direct': direction}
        return {'code' : code}
    elif code == 2:
        return {'code': code, 'x': robot}
    else:
        return {'code': code, 'x': robot, 'y': crashed_robot}







# 방향 정의
# 1 - N 2 - E 3 - S 4 - W 


if __name__ == '__main__':
    col, row = list(map(int, input().rstrip().split()))
    n, m = list(map(int, input().rstrip().split()))
    
    board = [[0] * col for _ in range(row)]
 
    
    for i in range(n):
        x, y, direct = list(sys.stdin.readline().rstrip().split())
        direct = 1 if direct == 'N' else 2 if direct == 'E' else 3 if direct == 'S' else 4
        x = int(x)
        y = int(y)
        board[row - y][x-1] = {'robot': i+1, 'direct': direct}
        robots.append({'x': x-1, 'y': row - y})
   
    error_flag = True
    
    for i in range(m):
        target, command, count = list(sys.stdin.readline().rstrip().split())

        target = robots[int(target)-1]
     
        res = solution(board, target, command, int(count), row, col)
        if res['code'] == 2:
            error_flag = False
            print('Robot {0} crashes into the wall'.format(res['x']))
            break
        elif res['code'] == 3:
            error_flag = False
            print('Robot {0} crashes into robot {1}'.format(res['x'],res['y']))
            break
        else:
            continue

    if error_flag == True:
        print('OK')
    
