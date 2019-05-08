//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//string collor[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
//
//
//int main() {
//	
//
//	string input[3];
//
//	for (int i = 0; i < 3; i++) {
//		cin >> input[i];
//	}
//
//	string ans = "";
//	int key[3];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (collor[j] == input[i]) key[i] = j;
//		}
//	}
//	if(key[0] != 0) ans += to_string(key[0]);
//	if (key[0] == 0 && key[1] == 0) cout << '0' << '\n';
//	else {
//		ans += to_string(key[1]);
//		for (int i = 0; i < key[2]; i++) {
//			ans += '0';
//		}
//
//		cout << ans << '\n';
//	}
//	return 0;
//}