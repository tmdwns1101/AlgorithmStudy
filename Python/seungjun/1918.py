priority = {
    '*' : 2,
    '/' : 2,
    '+' : 1,
    '-' : 1,
    '(' : 0
}

def solution(s):
    
    stack = []
    
    
    for c in s:
       
    
        if c == '(':
           stack.append(c)
        elif c == ')':
            while True:
                top = stack.pop()
                if top == '(':
                    break
                else:
          
                    print(top, end='')
        elif c == '+' or  c == '-' or c == '/' or c == '*':
            
            while len(stack) != 0 and stack[-1] != '(' and priority[c] <= priority[stack[-1]]:
                print(stack.pop(), end='')
           
            stack.append(c)         
        else:
            print(c, end='')
          
        

if __name__ == '__main__':
    s = input().rstrip()
    solution('(' +s+')')
    