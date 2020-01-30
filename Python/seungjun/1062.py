from itertools import combinations



def solution(words, k):
    if k < 5:
        return 0
    alpha = []
    for i in range(98, 123):
        if (
            i != 110 
            and i != 116
            and i != 105
            and i != 99
        ):
            alpha.append(chr(i))

    alpha_comb = combinations(alpha, k-5)
    ans = 0
    
    
    for teach in alpha_comb:
        
        teach = list(teach) + ['a','c','n','t','i'] 
        cnt = 0

        for word in words:
            word = word[4:-4]
            
            flag = True
            for i in range(len(word)):
                if teach.count(word[i]) == 0:
                    flag = False
                    break 
            if flag == True:
                cnt += 1
            
        ans = cnt if cnt > ans else ans 
     
    return ans

if __name__ == '__main__':
    n, k = list(map(int, input().rstrip().split()))
    words = [input() for _ in range(n)]
    
    res = solution(words, k)
    print(res)       


'''
global alphas
global n, k
global words

def solution(st, count):
    if count == k:
        weight = 0
        for word in words:
            flag = True
            word = word[4:-4]
            for i in range(len(word)):
                if alphas[ord(word[i])-97] == False:
                    flag = False
                    break
            if flag == True:
                weight += 1
        return weight

    else:
        ans = 0
        for i in range(st,26):
            if alphas[i] == False:
                alphas[i] = True 
                res = solution(st,count-1)
                ans = max(res, ans)
                alphas[i] = False

        return ans





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
        res = solution(0,k-5)
        print(res)
 '''   