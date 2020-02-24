import heapq 
import sys



if __name__ == '__main__':
    n = int(input())

    heap = []

    commands = []
    for i in range(n):
        commands.append(int(sys.stdin.readline()))
    
    for command in commands:
       
        if command != 0:
            heapq.heappush(heap,(abs(command),command))
        else:
            if len(heap) != 0:
                print(heapq.heappop(heap)[1])
            else:
                print(0)
