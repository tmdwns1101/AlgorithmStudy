import sys 


def main():
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    board = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

    ans = getMaxCandy(board,n,m)
    print(ans)


    


def getMaxCandy(board,n,m):
    dp = [[0] * m for _ in range(n)]

    dp[0][0] = board[0][0]
    for i in range(1,m):
        dp[0][i] = dp[0][i-1] + board[0][i] 
    for i in range(1,n):
        dp[i][0] = dp[i-1][0] + board[i][0]


    for i in range(1,n):
        for j in range(1,m):
            dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + board[i][j]

    
    return dp[n-1][m-1]


if __name__ == '__main__':
    main()