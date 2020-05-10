import sys 


if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))

    memo = {}



    for i in range(n):
        site, pw = list(sys.stdin.readline().split())
        memo[site] = pw 

    
    for i in range(m):
        search_site = sys.stdin.readline().rstrip()
        print(memo[search_site])
