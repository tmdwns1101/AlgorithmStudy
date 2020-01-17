def solution(target, weight, count):
    if count == 3:
        return 1 if target == weight else 0
    else:
        flag = False
        for i in range(1,46):
            ans = solution(target, weight + (i*(i+1)//2), count + 1)
            if ans == 1 :
                flag = True
                break
        return 1 if flag else 0                
   

if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        target = int(input())
        ans = solution(target, 0, 0)
        print(ans)   
            