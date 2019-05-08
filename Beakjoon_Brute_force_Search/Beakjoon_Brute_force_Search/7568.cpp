//#include<iostream>
//#include<vector>
//#include<cstring>
//#pragma warning(disable : 4996)
//
//
//using namespace std;
//
//
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//	vector<pair<int, int>> v(n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &v[i].first, &v[i].second);
//	}
//
//	int rank[50];
//
//	for (int i = 0; i < n; i++) rank[i] = 1;
//
//	for (int i = 0; i < n-1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (v[i].first > v[j].first && v[i].second > v[j].second) {
//				rank[j]++;
//
//			}
//
//			if (v[i].first < v[j].first && v[i].second < v[j].second) {
//				rank[i]++;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", rank[i]);
//	}
//	printf("\n");
//
//	return 0;
//}