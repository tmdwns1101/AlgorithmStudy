def solution(s):
    ans = ['0'] * 26
    for i in range(26):
        ans[i] = str(s.count(chr(i+97)))
    return ans

if __name__ == '__main__':
    s = input()
    ans = solution(s)
    print(' '.join(ans))