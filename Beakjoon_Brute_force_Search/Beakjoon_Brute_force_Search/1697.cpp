//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//#define MAX 200000
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	queue<int> q;
//
//	bool check[MAX] = { false };
//	int dist[MAX];
//
//
//	q.push(n);
//	check[n] = true;
//	dist[n] = 0;
//	while (!q.empty() && check[m] != true) {
//		int now = q.front();
//
//		q.pop();
//
//		if (now - 1 >= 0) {
//			if (check[now - 1] == false) {
//				q.push(now - 1);
//				check[now - 1] = true;
//				dist[now - 1] = dist[now] + 1;
//			}
//		}
//
//		if (now + 1 < MAX) {
//			if (check[now + 1] == false) {
//				q.push(now + 1);
//				check[now + 1] = true;
//				dist[now + 1] = dist[now] + 1;
//			}
//		}
//
//		if (2*now < MAX) {
//			if (check[2*now] == false) {
//				q.push(2*now);
//				check[2*now] = true;
//				dist[2*now] = dist[now] + 1;
//			}
//		}
//	}
//
//	printf("%d\n", dist[m]);
//
//	return 0;
//
//}