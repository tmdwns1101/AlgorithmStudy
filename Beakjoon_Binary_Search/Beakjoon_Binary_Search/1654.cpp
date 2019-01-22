#include<iostream>

#pragma warning(disable : 4996)



int k, n;  //k : 랜선의 갯수 n : 만들어야 할 랜선 갯수(n개 이상 만들어야함)

int ary[10001];

bool Check(int mid) {
	int cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += ary[i] / mid;
	}

	return cnt >= n;
}


int main() {
	scanf("%d %d", &k, &n);
	long long max = 0;

	for (int i = 0; i < k; i++) {
		scanf("%lld", &ary[i]);
		if (max < ary[i])
			max = ary[i];
	}

	long long left = 1;
	long long right = max;
	long long ans = 0;
	long long mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (Check(mid)) {
			if (ans < mid) ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	printf("%lld\n", ans);

	return 0;
}