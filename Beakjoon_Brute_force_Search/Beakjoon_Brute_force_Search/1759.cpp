//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//
////void go(int n, vector<char> &alpha, string &password, int index) 함수 
////원하는 패스워드를 만들기 위한 함수
////alpah는 사전순으로 정렬 되어 있어야 함
////매개변수 
////n : 만들고자 하는 패스워드 길이
////alpha : 입력으로 주어진 알파벳들
////password : 현재 까지 만들어진 패스워드
////index : alpha 의 index
//
////bool check(int n,vector<char> &alpha,string &password,int index) 함수
////앞으로 남은 알파벳으로 패스워드를 만들 수 있는지 확이 하는 함수
////매개변수는 go 함수와 같다.
//
//bool check(int n, vector<char> &alpha, string password, int index) {
//	if (password.length()+(alpha.size() - index) < n) {
//		return false;
//	}
//
//	
//	int s = n - password.length();  //현재 인덱스에 문자를 넣고 앞으로 더 넣을 수 있는 갯수
//	
//	int pmo = 0;
//	int pja = 0;
//	for (char x : password) {
//		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
//			pmo++;
//		}
//		else
//			pja++;
//	}
//
//	if (s != 0) {
//
//		int amo = 0;
//		int aja = 0;                                //매 번 alpha.size() - index 번 계산을 해야함 비효율적(문제에서는 최대 길이가 15밖에 안되서 가능은하나) 수식이나 다른 방법 요구됨
//		for (int i = index; i < alpha.size(); i++) {
//			char x = alpha[i];
//			if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
//				amo++;
//			}
//			else
//				aja++;
//		}
//		if (pmo + amo >= 1 && pja + aja >= 2) {
//			return true;
//		}
//	}
//	
//	else {
//		return pmo >= 1 && pja >= 2;
//	}
//	
//}
//
//
//void go(int n, vector<char> &alpha, string password, int index) {
//	if (check(n, alpha, password, index)) {
//		if (password.length() == n) {
//			cout << password << '\n';
//			return;
//		}
//		go(n, alpha, password + alpha[index], index + 1);
//		go(n, alpha, password, index + 1);
//	}	
//}
//
//int main() {
//	int l,c;
//	cin >> l>>c;
//
//	vector<char> alpha(c);
//
//	for (int i = 0; i < c; i++) {
//		cin >> alpha[i];
//	}
//	sort(alpha.begin(), alpha.end());
//
//	string password = "";
//	go(l, alpha, password, 0);
//
//	return 0;
//}