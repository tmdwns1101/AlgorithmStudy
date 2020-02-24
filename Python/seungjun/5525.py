
# O(n)
def failure_func(s):
    n = len(s)


    f = [0] * n
    j = 0
    for i in range(1,n):
        while j > 0 and s[j] != s[i]:
            j = f[j-1]

        if s[i] == s[j]:
            j += 1
            f[i] = j 

    
    return f 

# O(n + m)
def kmp(text, pattern):
    ans = []
    f = failure_func(pattern)

    n = len(text)
    m = len(pattern)

    j = 0 #pattern 인덱싱
    
    for i in range(n):
        while j >0 and text[i] != pattern[j]:
            j = f[j-1]

        if text[i] == pattern[j]:
            if j == m - 1:
                ans.append(i-m+1) # 찾은 패턴 위치
                j = f[j]
            else:
                j += 1

    return ans


if __name__ == '__main__':
    n = int(input())
    m = int(input())

    pattern = 'IO' * n + 'I'

    text = input().rstrip()

    res = kmp(text, pattern)
    print(len(res))
