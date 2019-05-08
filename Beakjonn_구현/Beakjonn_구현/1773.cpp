//#include<iostream>
//#include<cstring>
//
//#pragma warning(disable : 4996)
//using namespace std;
//
//#define MAX 2000000
//
//bool check[2000001];
//int stu[100];
//
//int main() {
//	int n;
//	int c;
//	
//	memset(check, false, sizeof(check));
//	cin >> n >> c;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &stu[i]);
//	}
//
//	int ans = 0;
//
//	for (int i = 0; i < n; i++) {
//		int k = 1;
//		while (1) {
//			int idx = stu[i] * k;
//			if (idx > c) break;
//			if (check[stu[i] * k] == false) {
//				check[stu[i] * k] = true;
//				ans++;
//			}
//			k++;
//			
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}