//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//
//int main() {
//	int n;
//
//	cin >> n;
//
//	queue<int> q;
//
//	for (int i = 0; i < n; i++) {
//		q.push(i + 1);
//	}
//	int ans;
//
//	if (n == 1) cout << 1 << endl;
//	else {
//		while (1) {
//			q.pop();
//			ans = q.front();
//			q.pop();
//			if (q.empty()) break;
//			q.push(ans);
//		}
//
//		cout << ans << endl;
//	}
//	return 0;
//}