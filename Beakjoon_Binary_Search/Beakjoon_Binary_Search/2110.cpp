#include<iostream>
#include<algorithm>

#pragma warning(disable :4996)

using namespace std;

int N, C; //N : 집의 개수 C : 공유기 개수
long long ary[20001];

bool Check(int mid) {
	int cnt = 1;
	int last = ary[0];

	for (int i = 1; i < N; i++) {
		if (ary[i] - last >= mid) {
			cnt++;
			last = ary[i];
		}
	}

	return cnt >= C;
}

int main() {
	scanf("%d %d", &N, &C);
	int max = 0;
	for (int i = 0; i < N; i++) {
		scanf("%lld", &ary[i]);
	}

	

	sort(ary, ary + N);

	long long left = 1;
	long long right = ary[N - 1] - ary[0];  //좌표의 최대 차이
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