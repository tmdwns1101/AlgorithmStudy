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
            length = len(word)
            for i in range(len(teach)):
                length -= word.count(teach[i]) 
            if length == 0:
                cnt += 1
        ans = cnt if cnt > ans else ans 
    return ans
        



if __name__ == '__main__':
    n, k = list(map(int, input().rstrip().split()))
    words = [input() for _ in range(n)]
    res = solution(words,k)
    print(res)
