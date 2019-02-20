//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//int main() {
//	string str;
//	getline(cin,str);
//	
//	int ans = 0;
//	int index = 0;
//	bool flag = false;
//	if (str.length() == 0)
//	{
//		printf("%d\n", 0);
//		
//	}
//	else {
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] != ' ') {
//				flag = true;
//				break;
//			}
//		}
//
//		for (int i = 1; i < str.length() - 1; i++) {
//			
//			if (str[i] == ' ') {
//				if (str[i - 1] != ' ' && str[i + 1] != ' ') {
//					ans++;
//				
//				}
//			}
//			
//		}
//
//		if (flag == true) ans++;
//		printf("%d\n", ans);
//	}
//	return 0;
//}