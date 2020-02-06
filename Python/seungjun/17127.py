from itertools import combinations
import sys
from functools import reduce

n = int(input())

trees = list(map(int, sys.stdin.readline().rstrip().split()))

idxes = [i for i in range(1,n)]

ans = -1
for tree_pos in combinations(idxes, 3):
    tree_pos = sorted(list(tree_pos))

    m = reduce(lambda  x,y: x*y, trees[0:tree_pos[0]])
    i = reduce(lambda  x,y: x*y, trees[tree_pos[0]:tree_pos[1]])
    t = reduce(lambda  x,y: x*y, trees[tree_pos[1]:tree_pos[2]])
    f = reduce(lambda  x,y: x*y, trees[tree_pos[2]:])

    sumV = m + i + t + f 
    ans = sumV if ans < sumV else ans 

print(ans)