//#include<iostream>
//#include<cmath>
//#pragma warning(disable : 4996)
//using namespace std;
//
//int mushroom[11];
//
//int Solution(int sum, int cnt) {
//	if (cnt > 10) {
//		return sum;
//	}
//	else {
//		int cur = sum + mushroom[cnt];
//		int next = Solution(cur, cnt + 1);
//
//		return abs(100 - next) <= abs(100 - cur) ? next : cur;
//	}
//}
//
//
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		scanf("%d", &mushroom[i]);
//	}
//	int ans = Solution(0, 1);
//
//	printf("%d\n", ans);
//
//	return 0;
//
//}