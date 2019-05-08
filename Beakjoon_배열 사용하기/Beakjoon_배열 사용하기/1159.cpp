//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//int main() {
//	int n;
//	int position[26] = {0};
//	cin >> n;
//	string s;
//
//	
//
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		position[s.front() - 'a']++;;
//	}
//	int cnt = 0;
//	for (int i = 0; i < 26; i++) {
//		if (position[i] >= 5) {
//			printf("%c", i + 97);
//			cnt++;
//		}
//	}
//
//	if (cnt == 0) printf("PREDAJA\n");
//
//	return 0;
//
//}