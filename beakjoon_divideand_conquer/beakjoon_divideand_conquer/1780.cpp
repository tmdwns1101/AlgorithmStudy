//#include<cstdio>
//#include<cstring>
//#pragma warning(disable : 4996)
//
//
////1780
//
//
//
//int ary[2200][2200];
//int ans[3];
//int N;
//
//
//bool check(int r, int c, int size) {
//	int checkNum = ary[r][c];
//
//	for (int i = r; i < r+size; i++) {
//		for (int j = c; j < c+size; j++) {
//			if (checkNum != ary[i][j])
//				return false;
//		}
//	}
//
//	return true;
//}
//
//
//void divide(int r, int c, int size) {
//	if (check(r, c, size))
//		ans[ary[r][c]] += 1;
//	else {
//		int newSize = size / 3;
//
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				divide(r + newSize*i, c + newSize*j, newSize);
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	scanf("%d", &N);
//	memset(ans, 0, sizeof(ans));
//	int input;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &input);
//			input++;
//			ary[i][j] = input;
//		}
//	}
//
//	divide(0, 0, N);
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d\n", ans[i]);
//	}
//
//	return 0;
//}