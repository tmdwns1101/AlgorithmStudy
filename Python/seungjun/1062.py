import sys
from itertools import combinations

n, k = list(map(int, input().rstrip().split()))

if k < 5:
    print(0)
elif k == 26:
    print(n)
else:
    alpha = set('acnti')
    check = set()
    words = []
    for i in range(n):
        word = set(sys.stdin.readline()[:-1])
        words.append(word) 
        check = check.union(word)
    
    check = check - alpha
    ans = 0

    for teach in combinations(check, min(k-5, len(check))):
        teach = set(teach).union(alpha)
        cnt = 0
        for word in words:
            
            if word.issubset(teach):
                cnt += 1
        ans = cnt if cnt > ans else ans 
    print(ans)

'''

global alphas
global n, k
global words

 

ans = 0

def solution(st, count):
    global ans
 
    if count == 0:
        weight = 0
        
        for i in range(n):
            flag = True
            word = words[i][4:-4]
            for j in range(len(word)):
                if alphas[ord(word[j])-97] == False:
                    flag = False
                    break
            if flag == True:
                weight += 1
            if weight + n - i <= ans:
                break
        ans = weight if ans < weight else ans
        #return weight

    else:
        #ans = 0
            
        for i in range(st,26):
            if alphas[i] == False:
                alphas[i] = True 
                solution(i, count-1)
                
                alphas[i] = False
        #return ans





if __name__ == '__main__':
    n, k = list(map(int, input().rstrip().split()))
    words = [input() for _ in range(n)]
    
    
    alphas = [False for _ in range(26)]
    must_alpha = [97,99,105,110,116]
    for i in range(len(must_alpha)):
        alphas[must_alpha[i]-97] = True
    
    if k < 5:
        print(0)
    else:
        #res = solution(0,k-5)
        solution(0,k-5)
        print(ans)

'''