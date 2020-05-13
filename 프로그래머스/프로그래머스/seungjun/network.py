from collections import deque

def solution(n, computers):

    visited = [False] * n

    ans = 0

    for i in range(n):
        if visited[i] == False:
            visited[i] = True
            q = deque()
            for j in range(n):
                if computers[i][j] == 1 and i != j:
                    q.append(j)
            
            while len(q) != 0:

                front = q.popleft()
                visited[front] = True 

                for k in range(n):
                    if computers[front][k] == 1 and front != k and visited[k] == False:
                        q.append(k)
            ans += 1

    return ans 

res = solution(3,[[1, 1, 0], [1, 1, 0], [0, 0, 1]])
print(res)

