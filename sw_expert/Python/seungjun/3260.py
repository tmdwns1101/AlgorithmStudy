def sum_func(num1, num2):
    if len(num1) < len(num2):
        num1, num2 = num2, num1
    
    num2 = '0' * (len(num1)-len(num2)) + num2
    
    ans = ''
    c = 0
  
    for i in range(len(num1)-1, -1, -1):
       
        a = int(num1[i])
        b = int(num2[i])
      
        
        n = (a+b+c) % 10
        c = (a+b+c) // 10
       

        ans += str(n)

    
    
    if c != 0:
        ans = ans + str(c)
    
    return ans[::-1]

n1, n2 = list(map(int,input().rstrip().split()))
res = sum_func('1','3')
print(res)