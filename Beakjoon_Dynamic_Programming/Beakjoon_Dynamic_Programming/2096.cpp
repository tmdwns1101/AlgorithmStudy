//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
///*version 2*/
//
//int Max(int a, int b) { return a > b ? a : b; }
//int Min(int a, int b) { return a < b ? a : b; }
//
//
//int main() {
//	int n;
//	int max_dp[2][4] = { 0 };
//	int min_dp[2][4] = { 0 };
//	int ary[4];
//
//	scanf("%d", &n);
//
//	
//	for (int i = 1; i <= n; i++) {
//		scanf("%d %d %d", &ary[1], &ary[2], &ary[3]);
//
//		max_dp[1][1] = Max(max_dp[0][1], max_dp[0][2]) + ary[1];
//		max_dp[1][2] = Max(max_dp[1][1] - ary[1], max_dp[0][3]) + ary[2];
//		max_dp[1][3] = Max(max_dp[0][2], max_dp[0][3]) + ary[3];
//		
//		max_dp[0][1] = max_dp[1][1];
//		max_dp[0][2] = max_dp[1][2];
//		max_dp[0][3] = max_dp[1][3];
//
//		min_dp[1][1] = Min(min_dp[0][1], min_dp[0][2]) + ary[1];
//		min_dp[1][2] = Min(min_dp[1][1] - ary[1], min_dp[0][3]) + ary[2];
//		min_dp[1][3] = Min(min_dp[0][2], min_dp[0][3]) + ary[3];
//
//		min_dp[0][1] = min_dp[1][1];
//		min_dp[0][2] = min_dp[1][2];
//		min_dp[0][3] = min_dp[1][3];
//	}
//	
//	int max_ans = Max(max_dp[0][1], Max(max_dp[0][2], max_dp[0][3]));
//		
//	int min_ans = Min(min_dp[0][1], Min(min_dp[0][2], min_dp[0][3]));
//	
//	printf("%d %d", max_ans, min_ans);
//	
//	return 0;
//
//}