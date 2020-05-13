global visited
global percentages

visited = [[False] * 28 for _ in range(28)]
visited[13][13] = True

dx = [0,0,-1,1]
dy = [-1,1,0,0]


def dfs(x,y,n,percentage):
    if n == 0:
        return percentage 
    
    else:
        ans = [0] * 4
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if visited[ny][nx] == False and percentages[i] != 0:
                visited[ny][nx] = True
                ans[i] = dfs(nx, ny,n-1,percentage * percentages[i])
                visited[ny][nx] = False
        
        return sum(ans)

if __name__ == '__main__':
    inputs = list(map(int, input().rstrip().split()))
    n = inputs[0]
    percentages = list(map(lambda elem: elem / 100, inputs[1:]))

    res = dfs(13,13,n,1)
    print(res)