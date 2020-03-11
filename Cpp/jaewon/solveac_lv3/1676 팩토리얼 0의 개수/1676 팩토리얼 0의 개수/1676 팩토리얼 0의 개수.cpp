/*
문제
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)

출력
첫째 줄에 구한 0의 개수를 출력한다.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int arr[502];
	int two(0), five(0);
	arr[0] = 0;
	for (int i = 1; i <= 500; i++) {
		int temp = i;
		while (temp >= 2 && (temp % 2 == 0)) {
			two++;
			temp /= 2;
		}
		while (temp >= 5 && (temp % 5 == 0)) {
			five++;
			temp /= 5;
		}
		int ten = min(two, five);
		arr[i] = arr[i - 1] + ten;
		two -= ten;
		five -= ten;
	}
	cin >> n;
	cout << arr[n];
}
