import sys 

if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    pascal = [[0] * (n+1) for _ in range(n+1)]
    
    for i in range(n+1):
        for j in range(i+1):
            if j == 0 or i == j:
                pascal[i][j] = 1
            else:
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]
    
    
    print(pascal[n][m])