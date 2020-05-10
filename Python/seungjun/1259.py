import sys

def is_palindrome(_str_):
    if len(_str_) <= 1:
        print('yes')
    else:
        if _str_[0] == _str_[-1]:
            is_palindrome(_str_[1:-1])
        else:
            print('no')



if __name__ == '__main__':
    while True:
        num = sys.stdin.readline().rstrip()
        if num != '0':
            is_palindrome(num) 
        else:
            break