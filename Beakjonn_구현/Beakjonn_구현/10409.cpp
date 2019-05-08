//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//
//int client[50];
//
//
//int main() {
//	int t;
//	int n;
//	scanf("%d %d", &n,&t);
//	
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &client[i]);
//	}
//
//	int weight = 0;
//
//	int ans = 0;
//
//	for (int i = 0; i < n; i++) {
//		weight += client[i];
//		if (weight <= t) {
//			ans++;
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//
//}