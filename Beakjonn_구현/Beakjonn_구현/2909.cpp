//#include<iostream>
//#include<string>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	string c;
//	int k;
//
//	cin >> c >> k;
//
//	int size = c.length() - 1;
//
//	int result = 0;
//	if (size < k) {
//		if (c[0] - '0' >= 5) {
//			if (pow(10, k) / 2 >= pow(10, size + 1))
//				result = 0;
//			else {
//				result = pow(10, size + 1);
//			}
//		}
//		else {
//			result = 0;
//		}
//	}
//	else {
//		
//		if (k == 0) {
//			result = stoi(c);
//		}
//		else {
//			reverse(c.begin(), c.end());
//			int change = c[k-1]-'0';
//			
//			if (change >= 5) {
//				for (int i = 0; i < k; i++) {
//					c[i] = '0';
//				}
//				reverse(c.begin(), c.end());
//				result = stoi(c);
//				result += pow(10, 2);
//			}
//			else {
//				for (int i = 0; i < k; i++) {
//					c[i] = '0';
//				}
//				reverse(c.begin(), c.end());
//				result = stoi(c);
//			}
//		}
//
//		
//	}
//	cout << result << '\n';
//
//	return 0;
//
//}
