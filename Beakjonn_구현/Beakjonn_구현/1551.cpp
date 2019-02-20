//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//
//string Solution(string s, int k,int n) {
//
//	vector<int> A;
//	vector<int> B(s.size());
//	string tmp = "";
//	
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] != ',') {
//			
//			tmp += s[i];
//		}
//		else {
//			A.push_back(stoi(tmp));
//			tmp = "";
//		}
//	}
//	A.push_back(stoi(tmp));
//
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < A.size() - 1; j++) {
//			B[j] = A[j + 1] - A[j];
//		}
//		A = B;
//	}
//	string ans = "";
//	for (int i = 0; i < n - k; i++) {
//	
//		ans += to_string(A[i]);
//		if(i != n-k-1) ans += ',';
//	}
//	
//	return ans;
//}
//
//
//int main() {
//	string str;
//	int k;
//	int n;
//	cin >> n >> k;
//	cin >> str;
//
//
//	string result = Solution(str, k, n);
//	
//	cout << result << '\n';
//
//	return 0;
//}