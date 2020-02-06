n, k = list(map(int, input().rstrip().split()))

pascal = [[0] * (n+1) for _ in range(n+1)]
for i in range(n+1):
    for j in range(i+1):
        if j == 0 or j == i:
            pascal[i][j] = 1
        else:
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]


ans = pascal[n][k]
print(ans)