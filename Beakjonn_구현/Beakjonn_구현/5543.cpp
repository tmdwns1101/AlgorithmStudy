//#include<iostream>
//
//using namespace std;
//
//
//int prices[5];
//
//int main() {
//
//	for (int i = 0; i < 5;i++) {
//		cin >> prices[i];
//	
//	}
//
//	int min = 4000;
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 3; j < 5; j++) {
//			int cur = prices[i] + prices[j];
//			if (cur < min) {
//				min = cur;
//			}
//		}
//	}
//
//	int result = min - 50;
//
//	cout << result << '\n';
//
//	return 0;
//
//}