global n
global board 
def calc():
    ans = 0
    for i in range(n):
        cnt = 1
        for j in range(n-1):
            if board[i][j] == board[i][j+1]:
                cnt += 1
            else:
                ans = ans if ans > cnt else cnt
                cnt = 1
        ans = ans if ans > cnt else cnt
    for j in range(n):
        cnt = 1
        for i in range(n-1):
            if board[i][j] == board[i+1][j]:
                cnt += 1
            else:
                ans = ans if ans > cnt else cnt
                cnt = 1
        ans = ans if ans > cnt else cnt
    return ans
    



def solution():
    ans = 0
    for i in range(n-1):
        for j in range(n):
            # 행 바꿈
            board[i][j], board[i+1][j] =  board[i+1][j], board[i][j]
            sub_ans =  calc()
            ans = ans if ans > sub_ans else sub_ans
            board[i][j], board[i+1][j] =  board[i+1][j], board[i][j]
            
    for j in range(n-1):
        for i in range(n):
            #열 바꿈
            board[i][j], board[i][j+1] =  board[i][j+1], board[i][j]
            sub_ans =  calc()
            ans = ans if ans > sub_ans else sub_ans
            board[i][j], board[i][j+1] = board[i][j+1], board[i][j]  
    return ans

if __name__ == '__main__':
    n = int(input())
    board = [list(input()) for _ in range(n)]

    res = solution()
    print(res)