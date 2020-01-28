/*
�츮�� �ٷ�� �м����� �и�� ���ڰ� ��� 1 �̻� 32767 ���϶�� ��������. ���м��� �и�� ������ �ִ� ������� 1�� �м��� ���Ѵ�.

�Է�
ù° �ٿ� �м��� ǥ���ϴ� ���ڿ� �и� �־�����. (��, ���ڴ� �и𺸴� �۴�)

���
ù° �ٿ� �츮�� ã�� �м��� ǥ���ϴ� ���ڿ� �и� �������� ������ ����Ѵ�.
*/
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

bool prime[32768];

void eratostenes(bool *prime) {
	//------ �����佺�׳׽��� ä ---------
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

	cin >> n >> d; // ���� : numerator, �и� : denominator
	int num1 = 32767;
	int num2 = round((double)(32767 * n) / d); // �ݿø�
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