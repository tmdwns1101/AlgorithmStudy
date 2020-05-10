import sys
from math import gcd

#gcd with 유클리드 호제법
'''
def GCD(a,b):

    temp_a = a if a > b else b
    temp_b = b if b < a else a

    n = temp_b
    while temp_b > 0:
        temp = temp_a % temp_b
        
        temp_a = temp_b
        temp_b = temp
        if temp_b != 0:
            n = temp
    return n
'''


if __name__ == '__main__':
    tc = int(sys.stdin.readline())

    for i in range(tc):
        m, n, x, y = list(map(int,sys.stdin.readline().rstrip().split()))

        lcm = (m*n) // gcd(m,n)
     
        while True:
            if x > lcm or x % n == y:
                break
            else:
                x += m 
        
        if x > lcm:
            print("-1")
        else:
            print(x)