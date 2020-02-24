import sys

def find_path(paths, n):


    for k in range(n):
        for i in range(n):
            for j in range(n):
                if paths[i][k] == '1' and paths[k][j] == '1':
                    paths[i][j] = '1'
                   
    

if __name__ == '__main__':
    n = int(input())

    paths = [list(sys.stdin.readline().rstrip().split()) for _ in range(n)]

    find_path(paths, n)
    
    for i in range(n):
        for j in range(n): 
            print(paths[i][j], end=' ')
        print()