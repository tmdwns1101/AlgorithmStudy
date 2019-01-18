#include<cstdio>

#pragma warning(disable:4996)


//2875


int main() {
	int n, m, k;
	int cnt = 0;
	scanf("%d %d %d", &n, &m, &k);

	while (n + m >= k + 3) {
		if (n >= 2 && m >= 1) {
			cnt++;
			n -= 2;
			m -= 1;
		}
		else
			break;
	}

	printf("%d\n", cnt);

	return 0;

}