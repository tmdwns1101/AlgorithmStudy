import sys

def get_lcs(string1, string2):


    if len(string1) < len(string2):
        string1, string2 = string2, string1
    
    n = len(string1)
    m = len(string2)
    dp = [[0] * (m+1) for _ in range(n+1)] 

    for i in range(1,n+1):
        for j in range(1,m+1):
            if string1[i-1] == string2[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
            else:
                dp[i][j] = max(dp[i-1][j],dp[i][j-1])

    ans = dp[n][m]

    return ans 


first_string = sys.stdin.readline().rstrip()
second_string = sys.stdin.readline().rstrip()

res = get_lcs(first_string,second_string)

print(res)