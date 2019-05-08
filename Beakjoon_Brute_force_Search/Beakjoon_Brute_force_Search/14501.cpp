//#include<iostream>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//pair<int, int> day[16];
//
//
//int Solution(int idx, int sum,int n) {
//	if (idx > n) {
//		return sum;
//	}
//	else {
//		
//		int useDay = day[idx].first;
//		int getProfit = day[idx].second;
//		int cur;
//		
//		if (idx + useDay > n+1) cur = sum;
//		else cur = sum + getProfit;
//
//		int leftMax = Solution(idx + useDay, cur, n);
//		int rightMax = Solution(idx + 1, sum, n);
//
//		return leftMax > rightMax ? leftMax : rightMax;
//	}
//}
//
//
//int main() {
//	int n;
//	cin >> n;
//	int use;
//	int profit;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d %d", &use, &profit);
//		day[i].first = use;
//		day[i].second = profit;
//	}
//
//	int ans = Solution(1, 0, n);
//
//	printf("%d\n", ans);
//
//	return 0;
//}