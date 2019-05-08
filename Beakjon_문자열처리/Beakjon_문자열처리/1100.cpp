//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstring>
//#pragma warning(disable:4996)
//
//using namespace std;
//
//
//
//int main() {
//
//	int ans = 0;
//	
//
//	char input[8][8];
//
//	for (int i = 0; i < 8; i++) {
//		
//			cin>>input[i];
//
//	}
//
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++) {
//			if (input[i][j] == 'F') {
//				if (i % 2 == 0 && j % 2 == 0) ans++;
//				else if (i % 2 == 1 && j % 2 == 1) ans++;
//			}
//		}
//	}
//
//	cout << ans << '\n';
//	return 0;
//}