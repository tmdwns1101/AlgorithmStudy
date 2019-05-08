//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//
//int main() {
//	string a;
//	string b;
//
//	cin >> a >> b;
//
//	char temp;
//
//	temp = a[2];
//	a[2] = a[0];
//	a[0] = temp;
//
//	temp = b[2];
//	b[2] = b[0];
//	b[0] = temp;
//
//	string result = "";
//
//	for (int i = 0; i < 3; i++) {
//		if (a[i] > b[i]) {
//			result = a;
//			break;
//		}
//		else if (a[i] < b[i]) {
//			result = b;
//			break;
//		}
//	}
//
//	cout << result << endl;
//}