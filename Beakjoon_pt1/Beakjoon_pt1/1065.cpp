//#include<iostream>
//
//using namespace std;
//
//int a, b, c;
//int main() {
//	int n;
//	int ans = 0;
//	cin >> n;
//	if (n < 100) {
//		ans = n;
//	}
//	else {
//		ans += 99;
//		for (int i = n; i >= 100; i--) {
//			int temp = i;
//			a = temp / 100;
//			temp = temp % 100;
//			b = temp / 10;
//			c = temp % 10;
//			if (a - b == b - c) ans++;
//		
//		}
//	}
//
//	cout << ans << '\n';
//}