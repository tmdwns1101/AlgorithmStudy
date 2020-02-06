import sys 
ans = []

n, k = list(map(int, sys.stdin.readline().rstrip().split()))

peoples = []
for i in range(n):
    peoples.append(str(i+1))


idx = k - 1
while True:
    ans.append(peoples.pop(idx))
    if len(peoples) == 0:
        break
    idx = (idx + k - 1) % len(peoples)

print( '<' +','.join(ans) +'>')