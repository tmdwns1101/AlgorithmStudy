
b, a = sorted(list(map(int, input().rstrip().split())))


gcd = b
t_a = a
t_b = b
while True:
    
    n = t_a % t_b
    t_a = b 
    t_b = n 
    if n == 0: 
        break
    gcd = n

lcm = a * b // gcd 

print(gcd)
print(lcm)


