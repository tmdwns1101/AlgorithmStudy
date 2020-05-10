from queue import PriorityQueue
import sys 

n = int(input())

q = PriorityQueue()

for _ in range(n):
    num  = int(sys.stdin.readline().rstrip())
    if num == 0:
        if q.empty() == False:
            print(q.get())
        else:
            print(num)
    else:
        q.put(num)
