/*
문제
수빈이는 동생과 숨바꼭질을 하고 있다. 
수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에 있다.
수빈이는 걷거나 순간이동을 할 수 있다. 
만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다.
순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

수빈이와 동생의 위치가 주어졌을 때, 
수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 구하는 프로그램을 작성하시오.

입력
첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다.
N과 K는 정수이다.

출력
수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.
*/

#include <iostream>
#include <math.h> // pow
using namespace std;

int n, k;
int ans(0);

int main()
{
	cin >> n >> k;

	if (n >= k) {
		ans = n - k;
		cout << ans;
		return 0;
	}

	int temp = k;
	int cnt = 0; // 나누기를 한 횟수

	// k를 저장한 temp가 n보다 작아질 때 까지 /2
	while (!(temp <= n)) {
		temp /= 2;
		cnt++;

		cout << "temp(1) : " << temp << endl;
		cout << "cnt : " << cnt << endl;
	}

	if ((n - temp) <= ((temp * 2) - n)) { // n이 temp*2 보다 temp에 더 가깝다면
		cout << "n-temp" << endl;

		ans += (n - temp);
		cout << "ans(1) : " << ans << endl;

		ans += cnt;
		cout << "ans(2) : " << ans << endl;

		temp *= pow(2, cnt);
		cout << "temp(2) : " << temp << endl;

		ans += (k - temp);
	}
	else {
		cout << "temp*2 - n" << endl;

		ans += ((temp * 2) - n);
		cout << "ans(1) : " << ans << endl;

		temp *= pow(2, cnt);
		cout << "temp(2) : " << temp << endl;

		cnt--;
		cout << "cnt : " << cnt << endl;

		ans += cnt;
		cout << "ans(2) : " << ans << endl;

		ans += (k - temp);
	}
	cout << ans;
}
