//#include<iostream>
//
//#pragma warning(disable : 4996)
//#define MAX 100001
//using namespace std;
//
//
//int dp[2][MAX];
//int ary[2][MAX];
//
//
//
//void Solution(int n);
//
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//
//int main() {
//	int test;
//	int n;
//
//	scanf("%d",&test);
//	while (test) {
//		scanf("%d", &n);
//		Solution(n);
//		test--;
//	}
//}
//
//void Solution(int n) {
//	for (int i = 0; i < 2; i++) {
//		for (int j = 1; j <= n; j++) {
//			scanf("%d",&ary[i][j]);
//		}
//	}
//
//	dp[0][0] = dp[1][0] = 0;
//	dp[0][1] = ary[0][1];
//	dp[1][1] = ary[1][1];
//	
//	for (int i = 2; i <= n; i++) {
//		dp[0][i] = Max(dp[1][i - 1], dp[1][i - 2]) + ary[0][i];
//		dp[1][i] = Max(dp[0][i - 1], dp[0][i - 2]) + ary[1][i];
//	}
//
//	printf("%d\n", Max(dp[0][n], dp[1][n]));
//}
