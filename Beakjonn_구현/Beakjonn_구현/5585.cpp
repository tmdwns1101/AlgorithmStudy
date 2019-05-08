//#include<iostream>
//
//using namespace std;
//
//int money[6] = { 500,100,50,10,5,1 };
//
//
//
//int main() {
//	int input;
//
//	cin >> input;
//
//	int ans = 0;
//
//	int result = 1000 - input;
//	for (int i = 0; i < 6; i++) {
//		int cur = result / money[i];
//		ans += cur;
//		result -= cur*money[i];
//	}
//
//	cout << ans << '\n';
//
//	return 0;
//}