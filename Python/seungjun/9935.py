import sys 
from collections import deque

def explotion_string(s, bomb):

    stack = deque()

    j = 0
    for i in range(len(s)):
        if len(stack) == 0:
            if s[i] == bomb[j]:
                j += 1
        else:
            if s[i] == bomb[stack[-1]['depth']]:
                j = stack[-1]['depth'] + 1
            else:
                j = 0
                if s[i] == bomb[j]:
                    j += 1
        
        stack.append({'c': s[i], 'depth':j})
                
        if j == len(bomb):
            while j != 0:
                stack.pop()
                j -= 1    
                
    stack = list(map(lambda elem: elem['c'], stack))
  
    
    if len(stack) == 0:
        print('FRULA')
    else:
        print("".join(stack))
       
      
            


if __name__ == '__main__':
    _str = sys.stdin.readline().rstrip()
    bomb = sys.stdin.readline().rstrip()

    if _str.count(bomb) == 0:
        print(_str)
    else:
        explotion_string(_str, bomb)
