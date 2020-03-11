import sys


def make_weight(board,n,m):
    weight = [[0] * (m+1) for _ in range(n+1) ]  # 0행 과 0열 감싸는 0 padding 추가

    weight[1][1] = board[0][0]

    for i in range(2,n+1):
        weight[i][1] = weight[i-1][1] + board[i-1][0]
    for i in range(2,m+1):
        weight[1][i] = weight[1][i-1] + board[0][i-1]
        


    
    for i in range(2,n+1):
        for j in range(2,m+1):
            weight[i][j] = weight[i][j-1] + weight[i-1][j] - weight[i-1][j-1] + board[i-1][j-1]

    return weight 


if __name__ == '__main__':
    n,m = list(map(int, sys.stdin.readline().rstrip().split())) 
    board = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

    k = int(input())

    bounding_boxes = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(k)] # i,j,x,y

    weight = make_weight(board,n,m)
    
    for i in range(k):
        i,j,x,y = bounding_boxes[i]
        ans = weight[x][y] - weight[x][j-1] - weight[i-1][y] + weight[i-1][j-1]
        print(ans)