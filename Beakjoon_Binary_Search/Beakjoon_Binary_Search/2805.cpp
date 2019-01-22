#include<iostream>

#pragma warning(disable :4996)


int n, m;
long long ary[1000001];


bool Check(long long mid) {
	long long sum = 0;
	long long subset;
	for (int i = 0; i < n; i++) {
		subset = ary[i] - mid;
		if (subset > 0)
			sum += subset;
	}
	return sum >= m;
}


int main() {
	scanf("%d %d", &n, &m);
	int max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &ary[i]);
		if (max < ary[i]) max = ary[i];
	}

	long long left = 0;
	long long right = max;
	long long mid;
	long long ans = 0;
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