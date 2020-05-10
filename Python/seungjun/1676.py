
n = int(input())

two = 0
i = 2
while i <= n:
    two += n // i
    i *= 2 
    

five = 0
i = 5
while i <= n:
    five += n // i 
    i *= 5
ans = five if five < two else two

print(ans)

