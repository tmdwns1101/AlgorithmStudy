//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//int main() {
//	int N;
//
//	cin >> N;
//
//	int max = 0;
//	
//	for (int i = 4; i <= N; i++) {
//		bool flag = true;
//		string s = to_string(i);
//		for (int j = 0; j < s.size(); j++) {
//			if (s[j] != '7' && s[j] != '4') {
//				flag = false;
//				break;
//			}
//			
//		}
//		if (flag == true) {
//			max = i;
//		}
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}