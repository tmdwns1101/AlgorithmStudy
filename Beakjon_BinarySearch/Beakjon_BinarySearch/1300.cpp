//#include<iostream>
//
//using namespace std;
//
//int Min(int a, int b) {
//	
//	return a < b ? a : b;
//}
//
//int main() {
//	long long sum = 0;
//
//	int a, b;
//
//	cin >> a >> b;
//
//	int left = 1; 
//	int right = b;
//	long long ans = 0;
//	while (left <= right) {
//		sum = 0;
//		int mid = (left + right) / 2;
//
//		for (int i = 1; i <= a; i++) {
//			sum += Min(a, mid / i);
//		}
//		if (sum >= b) {
//			right = mid - 1;
//			ans = mid;
//		}
//		else {
//			left = mid + 1;
//		}
//
//	}
//
//	cout << ans << '\n';
//}