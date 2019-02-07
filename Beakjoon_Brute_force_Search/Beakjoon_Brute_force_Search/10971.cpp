//#include<iostream>
//#include<algorithm>
//#include<vector>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int w[11][11];
//
//
//int main() {
//	int n;
//	int ans = INT_MAX;
//	
//
//	cin >> n;
//	vector<int> d (n);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &w[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		d[i] = i;
//	}
//
//	do {
//		int sum = 0;
//		bool ok = true;
//		for (int i = 0; i < n - 1; i++) {
//			if (w[d[i]][d[i + 1]] == 0) ok = false;
//			else {
//				sum += w[d[i]][d[i + 1]];
//			}
//		}
//		if (ok && w[d[n - 1]][d[0]] != 0) {
//			sum += w[d[n - 1]][d[0]];
//			if (ans > sum) {
//				ans = sum;
//			}
//		}
//	} while (next_permutation(d.begin(), d.end()));
//
//	printf("%d\n", ans);
//
//	return 0;
//}