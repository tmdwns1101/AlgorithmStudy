//#include<iostream>
//
//using namespace std;
//
//bool checker(int sw,int h, int c) {
//	if (sw == 1) {
//		return h == 0 ? false : true;
//	}
//	else if (sw == 2) {
//		return c == 1 ? false : true;
//	}
//	else {
//		return (h == 1 && c == 1) ? false : true;
//	}
//}
//
//
//int main() {
//	int m, n;   //m => 세로 길이 n => 가로 길이
//
//	cin >> m >> n;
//
//	bool check = true;   // check == true 가로 진행 check == false 세로 진행
//
//	int cnt = 0;
//	
//	int caseNum;
//
//	if (n < m) {
//		caseNum = 1;
//	}
//	else if (n > m) {
//		caseNum = 2;
//	}
//	else {
//		caseNum = 3;
//	}
//
//	while (checker(caseNum,n,m)) {
//		if (check == true) {
//			n--;
//			cnt++;
//			check = false;
//		}
//		else {
//			m--;
//			cnt++;
//			check = true;
//		}
//	}
//
//	cout << cnt << endl;
//
//	return 0;
//}