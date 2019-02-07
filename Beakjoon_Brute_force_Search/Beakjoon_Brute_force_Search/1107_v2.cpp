//#include<iostream>
//
//using namespace std;
//
//
//bool broken[10];
//
//int Possible(int c) {
//	int len = 0;
//
//	if (c == 0) {
//		return broken[c] ? 0 : 1;
//	}
//	else {
//		while (c > 0) {
//			if (broken[c%10]) {
//				return 0;
//			}
//			else {
//				len++;
//				c /= 10;
//			}
//		}
//		return len;
//	}
//}
//
//
//int main() {
//	int n;
//	int m;
//	int ans = 0;
//	int length;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int x;
//		cin >> x;
//		broken[x] = 1;
//	}
//
//	ans = n - 100;
//	if (ans < 0) {
//		ans = -ans;
//	}
//	for (int i = 0; i <= 1000000; i++) {
//		length = Possible(i);
//	
//		if (length > 0) {
//			int press = n - i;
//			if (press < 0) {
//				press = -press;
//			}
//
//			if (ans > length + press) {
//				ans = length + press;
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}