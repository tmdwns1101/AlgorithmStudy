#include<iostream>
#include<cstring>
//#include<algorithm>
//#include<cmath>
//#pragma warning(disable : 4996)
//
//
//using namespace std;
//int cost[1002];
//int temp[1002];
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	memset(temp, 0, sizeof(temp));
//
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &cost[i]);
//		temp[i] = cost[i];
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			temp[i] = max(temp[i], temp[i - j] + cost[j]);
//		}
//	}
//
//	printf("%d\n", temp[n]);
//
//	return 0;
//
//}