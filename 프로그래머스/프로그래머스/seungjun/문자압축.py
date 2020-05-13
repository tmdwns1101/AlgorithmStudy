def solution(s):
    answer = 1000
    if len(s) == 1:
        return 1
    limit = len(s) // 2
    
    for cut in range(1,limit+1):
        subset = ''
        count = 1
        tempStr = s[:cut]
        for i in range(cut, len(s), cut):
            if s[i:i+cut] == tempStr:
                count += 1
            else:
                if count == 1:
                    subset += tempStr
                else:
                    subset += str(count) + tempStr
                    count = 1
                tempStr = s[i:i+cut]
           
        if count == 1:
            subset += tempStr
        else:
            subset += str(count) + tempStr
       
        if answer > len(subset):
            answer = len(subset)
        
                
                
    return answer


solution("abcabcdede")