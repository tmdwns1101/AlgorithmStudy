'''
색종이 크기는 10x10
도화지 크기는 100x100
최대 색종이 수는 100 이하

n : 종이수

시간 복잡도는 O(n) 
'''




def solution(papers):
    board = [[0]*100 for _ in range(100)]

    area_count = 00
    for paper in papers:
        x, y = paper
        for i in range(10):
            for j in range(10):
                if board[y-1-i][j+x-1] == 0:
                    board[y-1-i][j+x-1] = 1
                    area_count += 1

    return area_count
               

    




if __name__ == '__main__':
    n = int(input())
    papers = []
    for i in range(n):
        x, y = list(map(int, input().rstrip().split()))
        papers.append([x,y])
    
    ans = solution(papers)
    print(ans)