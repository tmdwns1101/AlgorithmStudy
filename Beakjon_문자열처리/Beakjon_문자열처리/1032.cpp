//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//
//int main() {
//
//	vector<string> vs;
//	string ans = "";
//	string input;
//
//	int n;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> input;
//		vs.push_back(input);
//	}
//	
//	for (int i = 0; i < vs[0].length(); i++) {
//		bool flag = true;
//		for (int j = 1; j < n; j++) {
//			if (vs[0][i] != vs[j][i]) {
//				ans += "?";
//				flag = false;
//				break;
//			}
//		}
//		if (flag == true) ans += vs[0][i];
//	}
//
//	cout << ans << endl;
//}