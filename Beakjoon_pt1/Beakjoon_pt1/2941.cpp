//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//string cromatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//string rep[8] = { "..", "..", "...", "..", "..", "..", "..", ".." };
//int main() {
//	string s;
//
//	cin >> s;
//
//	int size = s.length();
//	int ans = 0;
//
//	string temp = s;
//	for (int i = 0; i < 8; i++) {
//
//		while (temp.find(cromatia[i]) != -1) {
//			ans++;
//			size -= cromatia[i].length();
//			temp.replace(temp.find(cromatia[i]), cromatia[i].length(), rep[i]);
//		}
//
//	}
//
//	ans += size;
//
//	cout << ans << '\n';
//
//}