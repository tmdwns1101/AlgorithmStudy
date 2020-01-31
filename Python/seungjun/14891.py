



def solution(gears, commands):
    
    for command in commands:
        gear_num, direct = command

        d = [0] * 4
        d[gear_num-1] = direct
        
        #오른쪽 탐색
        for i in range(gear_num-1,3):
            if gears[i][2] != gears[i+1][-2]:
                d[i+1] = -1* d[i]
            else:
                break
        
        #왼쪽 탐색
        for i in range(gear_num-1,0,-1):
            if gears[i][-2] != gears[i-1][2]:
                d[i-1] = -1 * d[i]
            else:
                break
        
        for i in range(4):
            if d[i] == 1:
                gears[i] = gears[i][-1:] + gears[i][:-1]
            elif d[i] == -1:
                gears[i] = gears[i][1:] + gears[i][0:1]
            else:
                continue
        
    ans = 0
    weight = 1
    
    for gear in gears:
        ans += int(gear[0]) * weight
        weight *= 2
    return ans

if __name__ == '__main__':
    gears = [list(input()) for _ in range(4)]
    k = int(input())
    commands = [list(map(int,input().rstrip().split())) for _ in range(k)]

    res = solution(gears, commands)
    print(res)