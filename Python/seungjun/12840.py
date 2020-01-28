import sys

def solution(h,m,s,action, c=0):
    cur_time = h * 3600 + m * 60 + s
   
    max_time = 24 * 3600
    min_time = 0
    c %= max_time
    if action == 1:
        cur_time = cur_time + c
        if cur_time >= max_time:
            cur_time = cur_time - max_time
            
    
    elif action == 2:
        cur_time -= c  
        if cur_time < min_time:
            cur_time = max_time - abs(cur_time)

    else:
        print("{0} {1} {2}".format(h,m,s))
        return h, m ,s
   
    h = cur_time // 3600
    
    cur_time %= 3600
    
    m = cur_time // 60
    s = cur_time % 60
    return h, m ,s
    
if __name__ == '__main__':
    h, m, s = list(map(int, input().rstrip().split()))
    test_case = int(input())
    for i in range(test_case):
        inputs = list(map(int, sys.stdin.readline().rstrip().split()))
        if inputs[0] != 3:
            h, m, s = solution(h,m,s,action=inputs[0],c=inputs[1])
        else:
            h, m, s = solution(h,m,s,action=inputs[0])