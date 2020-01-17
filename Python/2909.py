def solution(candy_price, zero_count):
    my_money = pow(10, zero_count)
    ans = round(candy_price / my_money)
    return ans * my_money



if __name__ == '__main__':
    candy_price, zero_count = list(map(int, input().rstrip().split()))
    ans = solution(candy_price, zero_count)
    print(ans)