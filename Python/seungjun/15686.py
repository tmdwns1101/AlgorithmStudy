import sys
from itertools import combinations

def solution(board,n,m):
    chicken_distances = []
    home_poses = []
    chicken_poses = []

    for i in range(n):
        for j in range(n):
            if board[i][j] == 1:
                home_poses.append({'r': i+1, 'c': j+1})
            if board[i][j] == 2:
                chicken_poses.append({'r': i+1, 'c': j+1})
    
    chicken_poses_comb = combinations(chicken_poses, m)

    ans = 10000
    for sub_chicken_pos in chicken_poses_comb:
        sub_chicken_pos = list(sub_chicken_pos)
        dist = 0
        for home_pos in home_poses:
            distance = []
            for chicken_pos in sub_chicken_pos:
                distance.append(abs(chicken_pos['r'] - home_pos['r']) +  abs(chicken_pos['c'] - home_pos['c']))
            dist += min(distance)
        ans = dist if dist < ans else ans
    return ans





if __name__ == '__main__':
    n, m = list(map(int, sys.stdin.readline().rstrip().split()))
    board = [list(map(int, sys.stdin.readline().rstrip().split())) for i in range(n)]

    res = solution(board,n,m)
    print(res)