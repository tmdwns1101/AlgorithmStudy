//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//
//int main() {
//	int n;
//	cin >> n;
//	
//	string input[100];
//
//	for (int i = 0; i < n; i++) {
//		cin >> input[i];
//	}
//
//	int ans = 0;
//
//	for (int i = 0; i < n; i++) {
//		string curString = input[i];
//		bool alpha[26];
//		memset(alpha, true, sizeof(alpha));
//		bool checkFlag = true;
//		char cur = curString[0];
//		alpha[cur - 'a'] = false;
//		for (int j = 1; j < curString.length(); j++) {
//			if (cur != curString[j]) {
//				cur = curString[j];
//				if (alpha[curString[j] - 'a'] == true)
//				{
//					
//					alpha[curString[j] - 'a'] = false;
//				}
//				else {
//					checkFlag = false;
//					break;
//				}
//			}
//		}
//		if (checkFlag == true) {
//			ans++;
//		}
//	}
//	cout << ans << "\n";
//
//	return 0;
//}