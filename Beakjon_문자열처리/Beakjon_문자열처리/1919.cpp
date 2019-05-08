//#include<iostream>
//#include<string>
//#include<cstring>
//
//using namespace std;
//
//
//int main() {
//	bool check[26];
//	memset(check, true, sizeof(check));
//	bool pos[1000];
//	memset(pos, true, sizeof(pos));
//
//	string a;
//	string b;
//
//	cin >> a >> b;
//
//
//
//	string maxStr;
//	string minStr;
//	int equ = 0;
//
//	int max = a.length() >= b.length() ? a.length() : b.length();
//	int min = a.length() <= b.length() ? a.length() : b.length();
//
//	if (max == a.length()) {
//		maxStr = a;
//		minStr = b;
//	}
//	else {
//		maxStr = b;
//		minStr = a;
//	}
//
//	for (int i = 0; i < min; i++) {
//		if (check[minStr[i] - 'a'] == true) {
//			for (int j = 0; j < max; j++) {
//
//				if (minStr[i] == maxStr[j]) {
//					check[minStr[i] - 'a'] = true;
//
//					if (pos[j] == true)
//					{
//						equ++;
//						pos[j] = false;
//						break;
//					}
//					
//				}
//				else {
//					check[minStr[i] - 'a'] = false;
//				}
//			}
//		}
//	}
//
//	
//	int ans = minStr.length() - equ + (maxStr.length() - equ);
//	printf("%d\n", ans);
//
//	return 0;
//}