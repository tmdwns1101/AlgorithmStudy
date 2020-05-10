import heapq
import sys 





if __name__ == '__main__':
    tc = int(input())

    for i in range(tc):
        k = int(sys.stdin.readline())
        min_heap = []
        max_heap = []
        del_min_heap = []
        del_max_heap = []
        operations = [list(sys.stdin.readline().rstrip().split()) for _ in range(k)]
        
        
        for operation in operations:
            command, num = operation
            
            if command == 'I':
                num = int(num)
                heapq.heappush(min_heap, num)
                heapq.heappush(max_heap, -num)
            else:
                if len(max_heap) != 0 and len(min_heap) != 0:
                    if num == '-1':
                        temp = heapq.heappop(min_heap)
                        heapq.heappush(del_min_heap, -temp)
                   
                    else:
                        temp = heapq.heappop(max_heap)
                        heapq.heappush(del_max_heap, -temp)
            
        while max_heap and del_min_heap and max_heap[0] == del_min_heap[0]:
            heapq.heappop(max_heap)
            heapq.heappop(del_min_heap)

        while min_heap and del_max_heap and min_heap[0] == del_max_heap[0]:
            heapq.heappop(min_heap)
            heapq.heappop(del_max_heap)

        if len(max_heap) == 0 and len(min_heap) == 0:
            print('EMPTY')
        else:
            print(-max_heap[0], min_heap[0])


        