//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//string minsic = "abkdeghilmnoprstuwy";
//
//bool Rule(string a, string b) {
//	
//	int i = 0;
//	//int j = 0;
//
//	int minLength = a.length() <= b.length() ? a.length() : b.length();
//
//
//
//	while (i<minLength) {
//		if (a[i] == b[i]) {
//			if (a[i] == 'n' && b[i] == 'n') {
//				if (a[i + 1] == 'g' && b[i + 1] != 'g') {
//					return false;
//				}
//				else if (a[i + 1] != 'g' && b[i + 1] == 'g') {
//					return true;
//				}
//				else if (a[i + 1] != 'g' && b[i + 1] != 'g') {
//					i++;
//				}
//				else {
//					i +=2 ;
//				}
//			}
//			else {
//				i++;
//			}
//			
//		}
//		else {
//			int aIdx = minsic.find(a[i]);
//			int bIdx = minsic.find(b[i]);
//
//			return aIdx < bIdx ? true : false;
//		}
//	}
//
//	return minLength == a.length() ? true : false;
//}
//
//int main() {
//	int n;
//	
//	cin >> n;
//	vector<string> vs(n);
//	for (int i = 0; i < n; i++) {
//		cin >> vs[i];
//	}
//
//	sort(vs.begin(), vs.end(), Rule);
//
//	for (int i = 0; i < n; i++) {
//		cout << vs[i]<<'\n';
//	}
//	return 0;
//}