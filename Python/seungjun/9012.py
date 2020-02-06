test_case = int(input())

for _ in range(test_case):
    sample = list(input())
  
    stack = []
    flag = True
    for i in range(len(sample)):
        if sample[i] == '(':
            stack.append(sample[i])
        else:
            if len(stack) == 0:
                flag = False
                break
            stack.pop() 
 
    if flag and len(stack) == 0:
        print('YES')
    else:
        print('NO')