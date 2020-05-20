

import sys



T = int(input())
# 여러개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
for test_case in range(1, T + 1):
    n = int(input())
    board = [input().rstrip() for i in range(n)]
    pivot = n // 2
    cost = 0
    for i in range(n):
        pos = i
        if pos > pivot:
            pos = 2*pivot - pos
        cost += int(board[i][pivot])
        #left
        for j in range(pivot-1, pivot-pos-1, -1):
            cost += int(board[i][j])
        
        for j in range(pivot+1,pivot+pos+1):
            cost += int(board[i][j])

    print("#{} {}".format(test_case, cost))
