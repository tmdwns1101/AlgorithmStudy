#include<cstdio>

#pragma warning(disable : 4996)


// Z  1074

int N;
int C;
int R;
int cnt = 0;

void Solution(int size, int r, int c) {
	if (size == 2) {
		if (r == R && c == C) {
			printf("%d", cnt);
			return;
		}
		cnt++;
		if (r == R && c + 1 == C) {
			printf("%d", cnt);
			return;
		}
		cnt++;
		if (r + 1 == R && c == C) {
			printf("%d", cnt);
			return;
		}
		cnt++;
		if (r + 1 == R && c + 1 == C) {
			printf("%d", cnt);
			return;
		}
		cnt++;
		return;
	}
	//1사분면
	Solution(size / 2, r, c);

	//2사분면
	Solution(size / 2, r, c + size / 2);

	//3사분면
	Solution(size / 2, r + size / 2, c);

	//4사분면
	Solution(size / 2, r + size / 2, c + size / 2);
}

int main() {
	scanf("%d %d %d", &N, &R, &C);
	Solution(1 << N, 0, 0);

	return 0;

}