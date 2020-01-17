def solution(x, y, limit, ext_cost, target):
    a = target * x
    b = y if limit >= target else y + ext_cost * (target - limit)
    return min(a,b)

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    limit = int(input())
    ext_cost = int(input())
    target = int(input())

    ans = solution(x,y,limit,ext_cost,target)
    print(ans)