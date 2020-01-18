from itertools import combinations


def solution(n, abilty_board, member_nums):
    ans = float('inf')

    for cand in combinations(member_nums, n//2):
        start_team = list(cand)
        link_team = list(set(member_nums) - set(cand))

        start_comb = list(combinations(start_team,2))
        link_comb = list(combinations(link_team,2))

        

        start_team_sum = 0
        for i,j in start_comb:
            start_team_sum += (abilty_board[i][j] + abilty_board[j][i])
        
        link_team_sum = 0
        for i,j in link_comb:
            link_team_sum += (abilty_board[i][j] + abilty_board[j][i])
        
        if ans > abs(start_team_sum - link_team_sum):
            ans = abs(start_team_sum - link_team_sum)

    return ans

if __name__ == '__main__':
    n = int(input())
    abilty_board = []
    for i in range(n):
        abilty_board.append(list(map(int, input().rstrip().split())))
    
    member_nums = [i for i in range(n)]
  
    print(solution(n,abilty_board,member_nums))