import heapq
import sys


n = int(input())

heap = []
for _ in range(n):
    num = int(sys.stdin.readline().rstrip())
    if num == 0:
        if len(heap) == 0:
            print(num)
        else:
            print(heapq.heappop(heap)[1])
    heapq.heappush(heap, (-num,num))