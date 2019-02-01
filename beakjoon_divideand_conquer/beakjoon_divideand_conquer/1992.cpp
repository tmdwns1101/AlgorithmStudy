//#include<cstdio>
//
//
//using namespace std;
//
//
//#pragma warning(disable : 4996)
//
//
////Äõµå Æ®¸® 1992
//
//char ary[65][65];
//
//bool Same(int r, int c, int size) {
//	char checkNum = ary[r][c];
//
//	for (int i = r; i < r + size; i++) {
//		for (int j = c; j < c + size; j++) {
//			if (checkNum != ary[i][j])
//				return false;
//		}
//	}
//
//	return true;
//}
//
//void Solution(int r, int c, int size) {
//	if (Same(r, c, size))
//		printf("%c", ary[r][c]);
//	else {
//		printf("(");
//		int newSize = size / 2;
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < 2; j++) {
//				Solution(r + newSize*i, c + newSize*j, newSize);
//			}
//		}
//		printf(")");
//	}
//}
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%s", ary[i]);
//
//	}
//	Solution(0, 0, n);
//
//	return 0;
//}
