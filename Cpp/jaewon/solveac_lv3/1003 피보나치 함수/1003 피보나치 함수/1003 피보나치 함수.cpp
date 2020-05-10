/*
다음 소스는 N번째 피보나치 수를 구하는 C++ 함수이다.

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
}
N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

출력
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.
*/
/*
0 : 1 0
1 : 0 1
2 : 1 1
3 : 1 2
4 : 2 3
*/

#include <iostream>
using namespace std;

int t, n;
int dp1[42], dp2[42];

int main()
{
    dp1[0] = 1;
    dp1[1] = 0;
    dp2[0] = 0;
    dp2[1] = 1;

    for (int i = 2; i <= 40; i++) {
        dp1[i] = dp1[i - 1] + dp1[i - 2];
        dp2[i] = dp2[i - 1] + dp2[i - 2];
    }

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp1[n] << " " << dp2[n] << '\n';
    }
}
