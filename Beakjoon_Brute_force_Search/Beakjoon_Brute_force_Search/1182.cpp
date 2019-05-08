//#include<iostream>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//int ary[21];
//int s;
//int n;
//
//int Solution(int idx,int sum) {
//	int cnt = 0;
//	if (idx <= n) {
//		int cur = ary[idx];
//		int cur_sum = sum + cur;
//		
//		if (cur_sum == s) cnt++;
//		
//		cnt += Solution(idx + 1, cur_sum);
//		cnt += Solution(idx + 1, sum);
//		
//	}
//
//	return cnt;
//}
//
//
//int main() {
//	scanf("%d %d", &n, &s);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &ary[i]);
//	}
//	
//	int ans = Solution(1, 0);
//
//	printf("%d\n", ans);
//}