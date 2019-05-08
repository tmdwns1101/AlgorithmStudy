//#include<iostream>
//#include<vector>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int lotto[13];
//
//
//void Solution(int idx, int cnt,int total,vector<int> v) {
//
//	if (cnt == 6) {
//		for (int i = 0; i < 6; i++) {
//			printf("%d ", v[i]);
//		}
//		printf("\n");
//	}
//
//	if (total >= 6 - cnt && cnt < 6) {
//		vector<int> a;
//		vector<int> b;
//		a = v;
//		b = v;
//		a.push_back(lotto[idx]);
//		Solution(idx + 1, cnt + 1, total - 1, a);
//		Solution(idx + 1, cnt, total - 1, b);
//	}
//
//}
//
//int main() {
//	while (1) {
//		int n;
//		scanf("%d", &n);
//		if (n == 0) return 0;
//		else {
//			for (int i = 0; i < n; i++) {
//				scanf("%d", &lotto[i]);
//			}
//			vector<int> ans;
//			Solution(0, 0, n, ans);
//			printf("\n");
//		}
//	}
//}