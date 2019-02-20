//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//
//	cin >> n;
//
//	
//	for (int i = 0; i < 2*n-1; i++) {
//		for (int j = 1; j <= (2*n-1); j++) {
//			if (i < n) {
//				if (j == n) cout << "*";
//
//				else if (j < n && j >= n - i) {
//					cout << "*";
//				}
//
//				if (j < n && j < n - i) cout << " ";
//
//				if (j > n && j <= n + i) {
//					cout << "*";
//				}
//			}
//			else {
//				if (j == n) cout << "*";
//				else if (j < n && j > i + 1 - n) {
//					cout << "*";
//				}
//				if (j < n && j <= i + 1- n) cout << " ";
//
//				if (j > n && j < 2*n-(i-n+1)) cout << "*";
//			}
//			
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}
