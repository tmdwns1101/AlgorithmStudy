import sys 
from collections import deque
def AC(commands, nums):
    q = deque(nums)
    direct = True 
    for command in commands:
        if command == 'R':
            direct = not direct
        else:
            if len(q) == 0:
                print('error')
                return 
            if direct == True:
                q.popleft()
            else:
                q.pop()
    
    if direct == False:
        nums = list(q)[::-1]
    else:
        nums = list(q)
    print('['+','.join(nums)+']')
    


if __name__ == '__main__':
    tc = int(input())

    for _ in range(tc):
        commands = list(sys.stdin.readline().rstrip())
        n = int(sys.stdin.readline().rstrip())
        nums = sys.stdin.readline().lstrip('[').rstrip(']\n').split(',')
        if len(nums) == 1 and nums[0] == '':
            nums = []
        AC(commands, nums)