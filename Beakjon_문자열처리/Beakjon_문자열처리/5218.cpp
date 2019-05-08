//#include<iostream>
//#include<vector>
//#include<string>
//
//
//using namespace std;
//
//
//int main() {
//	string s1;
//	string s2;
//	int ans = 0;
//
//	int test;
//
//	cin >> test;
//
//	while (test--) {
//		cin >> s1 >> s2;
//		
//		cout << "Distances: ";
//		for (int i = 0; i < s1.length(); i++) {
//			if (s1[i] <= s2[i]) {
//				ans = s2[i] - s1[i];
//			}
//			else {
//				ans = s2[i] - s1[i] + 26;
//			}
//			cout << ans << ' ';
//		}
//		cout << '\n';
//	}
//
//
//}