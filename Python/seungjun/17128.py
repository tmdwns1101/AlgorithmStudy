import sys

n, q = list(map(int,sys.stdin.readline().rstrip().split()))
cows =  list(map(int,sys.stdin.readline().rstrip().split()))
q = list(map(lambda x: int(x)-1,sys.stdin.readline().rstrip().split()))
indexing = [[] for _ in range(n)]


rooms_val = []
total_sum = 0
for i in range(n):
    ed = i + 4 
    room = []
    val = 1 
    for j in range(i, ed):
        if j >= n:
            j = j - n
        val *= cows[j]
        indexing[j].append(i) 
    
    rooms_val.append(val)
    total_sum += val


for i in range(len(q)):
    idx = q[i]
    cur = indexing[idx]

    for k in range(4):
        total_sum -= rooms_val[cur[k]]
        rooms_val[cur[k]] *= -1
            
        total_sum += rooms_val[cur[k]] 
        
    print(total_sum)



    