//#include<iostream>
//#include<string>
//
//
//#define MAX 50
//
//using namespace std;
//
//int Min(int a, int b) {
//	return a <= b ? a : b;
//}
//
//
//int Solution(const string short_s, const string long_s) {
//	int gap = long_s.length() - short_s.length();
//	int result = MAX;
//
//	for (int i = 0; i <= gap; i++) {
//		int temp = 0;
//		for (int j = 0; j < short_s.size(); j++) {
//			if (short_s[j] != long_s[j + i]) temp++;
//		}
//		result = Min(result, temp);
//	}
//
//	return result;
//}
//
//
//int main() {
//	string s1;
//	string s2;
//
//	cin >> s1 >> s2;
//
//	int ans = Solution(s1, s2);
//
//	cout << ans << endl;
//
//	return 0;
//}