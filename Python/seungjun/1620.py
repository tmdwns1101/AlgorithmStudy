'''
import sys

n, m = list(map(int, sys.stdin.readline().rstrip().split()))

board = [sys.stdin.readline().rstrip() for _ in range(n)]
questions = [sys.stdin.readline().rstrip() for _ in range(m)]


for question in questions:
    if question.isdigit():
        print(board[int(question)-1])
    else:
        print(board.index(question)+1)
'''

import sys

n, m = list(map(int, sys.stdin.readline().rstrip().split()))
board = []
board_dic = {}

for i in range(n):
    elem = sys.stdin.readline().rstrip()
    board.append(elem)
    board_dic[elem] = i +1 

questions = [sys.stdin.readline().rstrip() for _ in range(m)]


for question in questions:
    if question.isdigit():
        print(board[int(question)-1])
    else:
        print(board_dic[question])