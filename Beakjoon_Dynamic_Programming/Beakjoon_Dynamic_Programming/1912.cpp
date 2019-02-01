//#include<iostream>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//#define MAX 100002
//
//int dp[MAX];
//int ary[MAX];
//
//int main(){
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &ary[i + 1]);
//	}
//
//	dp[1] = ary[1];
//
//	for (int i = 2; i <= n; i++) {
//		/*if (dp[i - 1] > 0 && dp[i - 1] + ary[i] > ary[i]) {
//			dp[i] = dp[i - 1] + ary[i];
//		}
//		else
//			dp[i] = ary[i];*/
//		dp[i] = max(dp[i - 1] + ary[i], ary[i]);
//	}
//
//	int max = 0;
//	for (int i = 1; i <= n; i++) {
//		if (max < dp[i])
//			max = dp[i];
//	}
//
//	printf("%d\n", max);
//	
//	return 0;
//}