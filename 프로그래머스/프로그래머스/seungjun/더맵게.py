import heapq

def more_spicy(scoville, K):

    
    
    ans = 0
    heapq.heapify(scoville)
    print(scoville)
    while True:
        first_low = heapq.heappop(scoville)
        if first_low >= K:
            break
        ans += 1

        if len(scoville) < 1:
            ans = -1
            break
        second_low = heapq.heappop(scoville)

        new_scoville = first_low + (second_low *2)
        heapq.heappush(scoville, new_scoville)

    return ans


res = more_spicy([1, 12, 3, 9, 10, 2], 7)
print(res)
