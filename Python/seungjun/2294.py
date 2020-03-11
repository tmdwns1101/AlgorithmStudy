import sys 


MAX_VALUE = 10001



dp = [MAX_VALUE] * MAX_VALUE

def getMinCount(n, cents,k):
    global dp 

    for i in range(1,k+1):
        for cent in cents:
            if i == cent:
                break
            elif i - cent < 0 or dp[i-cent] == MAX_VALUE:
                continue
            else:
                
                dp[i] = min(dp[i], dp[i-cent]+1)

    
n, k = list(map(int, sys.stdin.readline().rstrip().split()))

cents = []

for i in range(n):
    cent = int(sys.stdin.readline().rstrip())
    cents.append(cent)
    dp[cent] = 1

getMinCount(n, cents,k)
if dp[k] == MAX_VALUE:
    print("-1")
else:
    print(dp[k])