#include<iostream>

#pragma warning(disable :4996)

using namespace std;


int a[50][50];
int b[50][50];


void Conv(int x, int y) {
	for (int i = x; i < x+3; i++) {
		for (int j = y; j < y+3; j++) {
			a[i][j] = 1 - a[i][j];
		}
	}
}


int main() {
	int n, m;
	int ans = 0;
	scanf("%d %d", &n, &m);

	//input 'A' matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	//input 'B' matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &b[i][j]);
		}
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] != b[i][j]) {
				Conv(i, j);
				ans++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				printf("-1\n");
				return 0;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}