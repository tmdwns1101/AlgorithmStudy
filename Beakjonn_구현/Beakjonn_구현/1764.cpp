//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//#include<algorithm>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//vector<string> v[26];
//
//bool binarysearch(int start, int end, string temp,int idx) {
//	if (start > end) {
//		return false;
//	}
//	int mid = (start + end) / 2;
//	if (v[idx][mid] == temp) return true;
//	else if (v[idx][mid] > temp) {
//		return binarysearch(start, mid - 1, temp,idx);
//	}
//	else {
//		return binarysearch(mid + 1, end, temp,idx);
//	}
//}
//
//int main() {
//	int N, M;
//
//	cin >> N >> M;
//	
//
//	string s;
//	for (int i = 0; i < N; i++) {
//		cin >> s;
//		v[s[0] - 'a'].push_back(s);
//	}
//
//	for (int i = 0; i < 26; i++) {
//		sort(v[i].begin(), v[i].end());
//	}
//
//	int ans = 0;
//	vector<string> ansV;
//	for (int i = 0; i < M; i++) {
//		cin >> s;
//		if (v[s[0] - 'a'].size() != 0) {
//			if (binarysearch(0, v[s[0] - 'a'].size()-1, s, s[0] - 'a')) {
//				ans++;
//				ansV.push_back(s);
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//	
//	for (int i = 0; i < ansV.size(); i++) {
//		cout << ansV[i] << '\n';
//	}
//	return 0;
//}