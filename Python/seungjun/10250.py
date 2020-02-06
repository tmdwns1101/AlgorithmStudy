test_case = int(input())
for i in range(test_case):
    h, w, n = list(map(int, input().rstrip().split()))
    floor = str(h) if n % h == 0 else str(n%h) 
    ho = (n -1) // h + 1 
    ho = str(ho) if ho >= 10 else '0' + str(ho)
    print(floor+ho)