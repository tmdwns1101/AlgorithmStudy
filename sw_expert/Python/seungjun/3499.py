from collections import deque

def perfect_shuffle(cards):
    pivot = len(cards) // 2
    if len(cards) % 2 != 0:
        pivot += 1
    
    left_cards = deque(cards[:pivot])
    right_cards = deque(cards[pivot:])

    shuffled_cards = []
    
    while len(left_cards) != 0 and len(right_cards) != 0:
        left_card = left_cards.popleft()
        right_card = right_cards.popleft()
        shuffled_cards.append(left_card)
        shuffled_cards.append(right_card)

    while len(left_cards) != 0:
        shuffled_cards.append(left_cards.popleft())
    return shuffled_cards


res = perfect_shuffle(['ALAKIR', 'ALEXSTRASZA', 'DR-BOOM', 'LORD-JARAXXUS', 'AVIANA'])
res = " ".join(res)
print(res)