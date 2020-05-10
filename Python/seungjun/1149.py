import sys


if __name__ == '__main__':
    n = int(input())

    home_rgb = [list(map(int, sys.stdin.readline().rstrip().split())) for _ in range(n)]

    dp = [[0]*3 for _ in range(n+1)]

    for i in range(1,n+1):
        for j in range(3):
            left = j -1 if j > 0 else 2
            right = j + 1 if j < 2 else 0  
          
            dp[i][j] = home_rgb[i-1][j] + min(dp[i-1][left], dp[i-1][right]) 
    
    ans = min(dp[n])

    print(ans)