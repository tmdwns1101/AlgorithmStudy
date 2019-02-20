//#include<iostream>
//
//using namespace std;
//
//
//int main() {
//	long long dp[65][10];
//	int n, t;
//
//	cin >> t;
//	
//	while (t--) {
//		cin >> n;
//
//		for (int i = 0; i < 10; i++) {
//			dp[1][i] = i+1;
//		}
//
//		for (int i = 2; i <= n; i++) {
//			dp[i][0] = 1;
//			for (int j = 1; j < 10; j++) {
//				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//			}
//		}
//		long long ans = dp[n][9];
//
//		cout << ans << '\n';
//	}
//}