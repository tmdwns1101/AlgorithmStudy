//#include<iostream>
//#include<queue>
//#include<deque>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int main() {
//	deque<int> dq;
//	queue<int> q;
//
//	int n, m;
//	int cnt = 0;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		dq.push_back(i + 1);
//	}
//
//	
//	int num;
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &num);
//		q.push(num);
//	}
//	
//	int target_idx;
//	int target = q.front();
//	bool check = false;
//	while (!q.empty()) {
//		int target = q.front();
//		if (check == false) {
//			for (int i = 0; i < dq.size(); i++) {
//				if (target == dq[i]) {
//					target_idx = i;
//					break;
//				}
//			}
//			check = true;
//
//		}
//		int mid = dq.size() / 2;
//		if (target == dq.front()) {
//			q.pop();
//			dq.pop_front();
//			check = false;
//		
//		}
//		else if (target_idx > mid) {
//			int end = dq.back();
//			dq.pop_back();
//			dq.push_front(end);
//			cnt++;
//		}
//		else {
//			int front = dq.front();
//			dq.pop_front();
//			dq.push_back(front);
//			cnt++;
//		}
//
//	}
//
//	printf("%d\n", cnt);
//	
//	return 0;
//}