/*
문제
정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.
정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.

입력
첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 정수 N이 주어진다.

출력
첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.
*/
/*

주어진 수(N)을 1로 만드는 최소 횟수는 =  'N-1을 1로 만드는 최소 횟수 + 1번' 또는 'N/2를 1로 만드는 최소 횟수 +1번' 또는 'N/3을 1로 만드는 최소 횟수 + 1번' 이 된다.
이를 식으로 표현하면 d[N을 1로 만드는 최소 횟수] = d[N-1을 1로 만드는 최소 횟수] + 1번 or d[N/2를 1로 만드는 최소 횟수] + 1번 or D[N/3을 1로 만드는 최소 횟수] + 1번이 된다.

*/

#include <iostream>
#include <cmath>
using namespace std;


int n;
int d[1000001] = { 0 };

int calc(int n);

int main()
{
	cin >> n;
	calc(n);
	cout << d[n];
	return 0;
}

int calc(int n)
{
	if (n == 1)
		return 0;
	if (d[n] > 0)
		return d[n];
	d[n] = calc(n - 1) + 1;
	if (n % 2 == 0)
	{
		int temp = calc(n / 2) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	if (n % 3 == 0)
	{
		int temp = calc(n / 3) + 1;
		if (d[n] > temp)
			d[n] = temp;
	}
	return d[n];
}