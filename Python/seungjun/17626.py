
dp = [0] * 500001

v = []
for i in range(1,225):
    v.append(i*i)


n = int(input())

dp[0] = 1
dp[1] = 1

for i in  range(2,n+1):
    minV =  987654321
    j = 0
    while v[j] <= i :
        minV = dp[i-v[j]] if dp[i-v[j]] < minV else minV
        j += 1
    dp[i] = minV + 1
  


print(dp[n])