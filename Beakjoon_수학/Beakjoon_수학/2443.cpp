//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//
//	cin >> n;
//	int k = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2*n-k; j++) {
//			printf("*");
//		}
//		k += 2;
//
//		printf("\n");
//	}
//	k = 2 * n - 3;
//	for (int i = n-2; i >=0; i--) {
//		for (int j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * n - k; j++) {
//			printf("*");
//		}
//		k -= 2;
//
//		printf("\n");
//	}
//
//}