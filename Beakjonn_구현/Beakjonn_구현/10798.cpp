//#include<iostream>
//#include<string>
//#include<vector>
//
//
//using namespace std;
//
//#define MAX 5
//
//int main() {
//	vector<string> s(MAX);
//
//	int max_size = 0;
//	for (int i = 0; i < MAX; i++) {
//		cin >> s[i];
//		if (max_size < s[i].size()) {
//			max_size = s[i].size();
//		}
//	}
//
//	string ans = "";
//
//	for (int i = 0; i < max_size; i++) {
//		for (int j = 0; j < MAX; j++) {
//			if (s[j].size() > i) {
//				ans += s[j].at(i);
//			}
//		}
//	}
//
//	cout << ans << "\n";
//	return 0;
//}