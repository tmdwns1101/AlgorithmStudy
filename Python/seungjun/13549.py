from heapq import heappush, heappop


MAX_RANGE = 100001

def excute_catch_brother(n,k):
    visited = [False] * MAX_RANGE

    q = []
    heappush(q, (0,(n,0)))
   
    ans = 0
    visited[n] = True 
    while len(q) != 0:
        front = heappop(q)[1]
        pos = front[0]
        time = front[1]

        if pos == k:
            ans = time
            break

       
            
            
        if pos * 2 < MAX_RANGE and visited[pos * 2] == False:
            visited[pos * 2] = True
            heappush(q, (time ,(pos * 2, time)))
        if pos + 1 < MAX_RANGE and visited[pos + 1] == False:
            visited[pos+1] = True
            heappush(q, (time+1 ,(pos+1, time+1)))
        if pos -1 >= 0 and visited[pos-1] == False:
            visited[pos-1] = True
            heappush(q, (time+1 ,(pos-1, time+1)))
            

    return ans 


n, k = list(map(int, input().rstrip().split()))

res = excute_catch_brother(n,k)
print(res)