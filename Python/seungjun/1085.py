x, y, w, h = list(map(int, input().rstrip().split()))

ans  = min(x, w-x, y, h-y)
print(ans)