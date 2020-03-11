import sys 

def get_max(tris, n):
    dp = [[0] * (n+1) for _ in range(n+1)]

    for i in range(n):
        
        for j in range(len(tris[i])):
            dp[i+1][j+1] = tris[i][j] + max(dp[i][j], dp[i][j+1])
        
    
    ans = max(dp[n])
    return ans
        


if __name__ == '__main__':
    n = int(input()) 

    tris = [list(map(int,sys.stdin.readline().rstrip().split())) for _ in range(n)] 

    res = get_max(tris,n)
    print(res)