import sys




if __name__ == '__main__':
    tc = int(sys.stdin.readline())

    dp = [0] * 101

    dp[1] = 1
    dp[2] = 1
    dp[3] = 1
    dp[4] = 2
    dp[5] = 2

    check_point = 5
    for i in range(tc):
        n = int(sys.stdin.readline())
        if n <= check_point:
            print(dp[n])
        else:
            for i in range(check_point+1,n+1):
                dp[i] = dp[i-1] + dp[i-5]
        
            check_point = n
            print(dp[n])

