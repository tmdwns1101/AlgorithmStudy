def solution(baseball):
    check = [False] * 1000

    for i in range(1,10):
        for j in range(1,10):
            if j == i:
                continue
            for k in range(1,10):
                if k == i or k == j:
                    continue
                num = i *100 + j *10 + k
                check[num] = True

    for i in range(len(baseball)):
        number, strike, ball = baseball[i]
        number = str(number)
        digit = [number[i] for i in range(len(number))]
        for j in range(100, 1000):
            s = 0
            b = 0
            if check[j] == True:
                
                cur_number = str(j)
                cur_digit = [cur_number[i] for i in range(len(cur_number))]

                for k in range(len(cur_digit)):
                    for r in range(len(digit)):
                        if cur_digit[k] == digit[r]:
                            if k == r:
                                s += 1
                            else:
                                b += 1
                            break 
                
                if s != strike or b != ball:
                    check[j] = False

    ans = check[100:].count(True)
    return ans


res = solution([[123, 1, 1], [356, 1, 0], [327, 2, 0], [489, 0, 1]])
print(res)

