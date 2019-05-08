//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//bool check[31];
//int main() {
//	memset(check, false, sizeof(check));
//	int n;
//	for (int i = 0; i < 28; i++) {
//
//		cin >> n;
//		check[n] = true;
//	}
//
//	int cnt = 0;
//	for (int i = 1; i < 31; i++) {
//		if (check[i] == false) {
//			cout << i << '\n';
//			cnt++;
//		}
//		if (cnt == 2) break;
//	}
//	return 0;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool solution(int x) {
//	bool answer = true;
//	string str = "hi hello";
//
//	
//	vector<int> v(6);
//	int cur = x;
//	int m = 10000;
//	int i = 0;
//	while (m > 0) {
//		v[i] = cur / m;
//		cur = cur % m;
//		m = m / 10;
//		i++;
//	}
//	int div = 0;
//	for (int j = 0; j<5; j++) {
//		div += v[i];
//	}
//	if (x >= 1) x = x % div;
//
//	if ( x != 0) answer = false;
//
//	return answer;
//}
//
//int main() {
//	bool re = solution(10);
//
//	printf("%d", re);
//}

//
//#include <string>
//#include <vector>
//#include<cstring>
//#include<iostream>
//
//using namespace std;
//
//string solution(string s) {
//	string answer = "";
//	string cmp = " ";
//	vector<string> v;
//	int st = 0;
//	int ed = s.size() - 1;
//	string temp = s;
//	char ch1[3] = "12";
//	char ch2[3] = "23";
//	strcmp(ch1, ch2);
//	cout << s.at(0) << endl;
//	for (int i = 0; i<s.size(); i++) {
//		 
//		if ( s.at(i) || i == s.size() - 1) {
//			ed = i - 1;
//			temp = s.substr(st, ed);
//			v.push_back(temp);
//			st = i + 1;
//		}
//	}
//	for (int i = 0; i<v.size(); i++) {
//		for (int j = 0; j<v[i].size(); j++) {
//			if (j % 2 || j == 0) v[i][j] = toupper(v[i][j]);
//			else v[i][j] = tolower(v[i][j]);
//		}
//
//		answer += v[i];
//		if (i != v.size() - 1) answer += " ";
//	}
//
//
//
//	return answer;
//}
//
//int main() {
//	string re = solution("try hello");
//	cout << re << endl;
//}