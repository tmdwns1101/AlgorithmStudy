//#include<iostream>
//#include<queue>
//
//
//using namespace std;
//
//int Solution(queue <bool> q) {
//	int ans = 1;
//	queue<bool> sub_q;
//	while (!q.empty()) {
//		bool cmp1 = q.front();
//		q.pop();
//		if (q.empty()) {
//			sub_q.push(cmp1);
//	
//		}
//		else {
//			bool cmp2 = q.front();
//			q.pop();
//
//
//			if (cmp1 == false && cmp2 == false) {
//				sub_q.push(cmp1);
//			}
//			else if((cmp1 == false && cmp2 == true) || (cmp1 == true && cmp2 ==false)) {
//				if (cmp1) sub_q.push(cmp1);
//				else sub_q.push(cmp2);
//			}
//			else {
//				return ans;
//			}
//		}
//	}
//	ans += Solution(sub_q);
//	return ans > 0 ? ans : -1;
//}
//
//
//
//int main() {
//	int n,a,b;
//	cin >> n >> a >> b;
//	
//	queue<bool> q;
//	
//	for (int i = 1; i <= n; i++) {
//		if (i == a || i == b) {
//			q.push(true);
//		}
//		else {
//			q.push(false);
//		}
//	}
//
//	int ans = Solution(q);
//
//	printf("%d\n", ans);
//
//	return 0;
//}