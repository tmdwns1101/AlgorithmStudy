def firstOperationCharacter(expr):
    depth = [[] for _ in range(45)]
    maxDepth = 0
    curDepth = 0

    stack = []
    for i in range(len(expr)):
        if expr[i] == '(':
            stack.append('(')
            curDepth += 1
            maxDepth = curDepth if curDepth > maxDepth else maxDepth

        elif expr[i] == ')':
            stack.pop()
            curDepth -= 1
        
        elif expr[i] == '+' or expr[i] == '*':
            depth[curDepth].append({'oper': expr[i], 'idx': i})
        else:
            continue
    
    cur_oper = '+'
   
    for i in range(len(depth[maxDepth])):
        elem = depth[maxDepth][i]
        oper = elem['oper']
        idx = elem['idx']
        if oper == cur_oper:
            ans = idx
        else:
            ans = idx
            break

    return ans

res = firstOperationCharacter('((2 + 2) * 2) * 3 + (2 + (2 * 2))')
print(res)