/*
우리가 다루는 분수들은 분모와 분자가 모두 1 이상 32767 이하라고 가정하자. 기약분수란 분모와 분자의 최대 공약수가 1인 분수를 말한다.

입력
첫째 줄에 분수를 표현하는 분자와 분모가 주어진다. (단, 분자는 분모보다 작다)

출력
첫째 줄에 우리가 찾는 분수를 표현하는 분자와 분모를 공백으로 구분해 출력한다.
*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool prime[32768];

void eratostenes(bool *prime) {
	//------ 에라토스테네스의 채 ---------
	prime[0] = prime[1] = true;
	for (int i = 2; i*i < numSize; i++) {
		if (!prime[i])
			continue;
		for (int j = 2 * i; j < numSize; j += i)
			prime[j] = true;
	}
	//------------------------------------
}
	
int main() {

	int n;
	double d;

	cin >> n >> d; // 분자 : numerator, 분모 : denominator
	int num1 = 32767;
	int num2 = round((double)(32767 * n) / d); // 반올림
	for (int i = 2; i <= num; i++) {
		if (!prime[i]) {
			if ((num1 % i == 0) && (num2 % i == 0)) {
				num1 /= i;
				num2 /= i;
			}
		}
	}
	cout << num2 << " " << num1;
	return 0;
}