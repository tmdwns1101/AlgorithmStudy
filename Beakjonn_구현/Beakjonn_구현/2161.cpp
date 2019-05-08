//#include<queue>
//#include<iostream>
//
//
//using namespace std;
//
//int main() {
//	int n;
//
//	cin >> n;
//
//	queue<int> q;
//
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//	}
//
//	while (!q.empty()) {
//		int front = q.front();
//		q.pop();
//		printf("%d ", front);
//		int back = q.front();
//		q.pop();
//		if (q.empty()) {
//			printf("%d\n", back);
//		}
//		else {
//			q.push(back);
//		}
//	}
//
//	return 0;
//}