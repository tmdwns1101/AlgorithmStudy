from itertools import combinations


def solution(talls):

    seven_members = combinations(talls, 7)

    
    for members in seven_members:
        members = list(members)
        sumV = sum(members)
        if sumV == 100:
            return sorted(members)


if __name__ == '__main__':
    talls = []
    for i in range(9):
        talls.append(int(input()))
    
    ans = solution(talls)
    for i in range(7):
        print(ans[i])