//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//#define MAX_N 100
//#define MAX_K 10000
//
//int coin[MAX_N] = { 0 };
//int dp[MAX_K] = { 0 };
//
//int main() {
//	int n, k;
//
//	scanf("%d %d", &n, &k);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &coin[i]);
//	}
//
//	dp[0] = 1;  //ex) 5원 짜리 하나로 무조건 가치 5원을 만들 수 있음
//
//	for (int i = 0; i < n; i++) {
//		for (int j = coin[i]; j <= k; j++) {
//			if (j - coin[i] >= 0) dp[j] += dp[j - coin[i]];   //무조건 coin[i] + (j- coin[i]) = j 이므로  j-coin[i]의 경우의 수를 계산
//		}
//	}
//
//	printf("%d\n", dp[k]);
//
//	return 0;
//}