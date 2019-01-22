#include<iostream>
#include<cmath>
#pragma warning(disable : 4996)

using namespace std;


#define MAX  1000000000;

int T;
int N;

int ary[100000];
int temp[100000];


bool Check(int mid) {
	int temp_t = 0;

	for (int i = 0; i < N; i++) temp[i] = ary[i];
	
	for (int i = 0; i < N-1; i++) {
		if (temp[i] + mid < temp[i + 1]) {
			temp_t += temp[i + 1] - (temp[i] + mid);
			temp[i + 1] = temp[i] + mid;
		}
	}
	
	for (int i = N - 1; i > 0; i--) {
		if (temp[i] + mid < temp[i-1]) {
			temp_t += temp[i - 1] - (temp[i] + mid);
			temp[i - 1] = temp[i] + mid;
		}

	}

	return temp_t < T;

	
}


int main() {
	scanf("%d %d", &N, &T);

	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}

	

	long long left = 0;
	long long right = MAX;
	long long mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (Check(mid)) {
			//left = mid + 1;
			right = mid - 1;
		}
		else
			//right = mid  - 1;
			left = mid + 1;
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", temp[i]);
	}

	

	return 0;
}