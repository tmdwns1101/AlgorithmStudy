//#include<iostream>
//#include<string>
//#include<queue>
//
//#define MAX 10000
//
//using namespace std;
//
//
//int main() {
//	int t;
//	cin >> t;
//
//	while (t--) {
//		int n, m;
//
//		cin >> n >> m;
//
//		int c[MAX];
//		int d[MAX];
//		int from[MAX];
//		char how[MAX];
//
//		memset(c, false, sizeof(c));
//		memset(d, 0, sizeof(d));
//
//		queue<int> q;
//
//		q.push(n);
//		c[n] = true;
//		d[n] = 0;
//
//		while (!q.empty() || c[m] != true) {
//			int now = q.front();
//			q.pop();
//			int next;
//			//'D' command
//			next = (2 * now) % MAX;
//			if (c[next] == false) {
//				q.push(next);
//				c[next] = true;
//				d[next] = d[now] + 1;
//				from[next] = now;
//				how[next] = 'D';
//			}
//
//			//'S' command
//			next = now - 1;
//			if (next == -1) next = 9999;
//			if (c[next] == false) {
//				q.push(next);
//				c[next] = true;
//				d[next] = d[now] + 1;
//				from[next] = now;
//				how[next] = 'S';
//			}
//
//			//'L' command
//			next = (now % 1000) * 10 + now / 1000;
//			if (c[next] == false) {
//				q.push(next);
//				c[next] = true;
//				d[next] = d[now] + 1;
//				from[next] = now;
//				how[next] = 'L';
//			}
//
//			//'R' command
//			next = (now % 10) * 1000 + (now / 10);
//			if (c[next] == false) {
//				q.push(next);
//				c[next] = true;
//				d[next] = d[now] + 1;
//				from[next] = now;
//				how[next] = 'R';
//			}
//		}
//
//		if (c[m] != true) {
//			cout << "Impossible!!\n";
//
//		}
//
//		else {
//			int A = n;
//			int B = m;
//			string ans = "";
//			
//			while (A != B) {
//				ans += how[B];
//				B = from[B];
//			}
//			reverse(ans.begin(), ans.end());
//			cout << ans << '\n';
//		}
//	}
//
//	return 0;
//}
