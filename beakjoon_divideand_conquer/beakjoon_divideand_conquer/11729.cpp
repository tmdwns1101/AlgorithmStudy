#include<cstdio>

#pragma warning(disable : 4996)


//11729 

int cnt;
int input;

void solve(int n, int x, int y) {
	if (n == 0)
		return;
	solve(n - 1, x, 6 - x - y);
	printf("%d %d\n", x, y);
	solve(n - 1, 6 - x - y, y);
	
}

int main() {
	scanf("%d", &input);
	printf("%d\n", (1 << input) - 1);
	solve(input, 1, 3);
	
	return 0;
}