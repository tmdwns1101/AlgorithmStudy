//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//map<string, int> mp;
//char s[22];
//vector<string> v;
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%s", s);
//		mp.insert(make_pair(s, 1));
//	}
//
//	int ans = 0;
//	for (int i = 0; i < m; i++) {
//		scanf("%s", s);
//		if (mp.count(s)) {
//			mp[s] = 0;
//			ans++;
//			v.push_back(s);
//		}
//	}
//
//	sort(v.begin(), v.end());
//	printf("%d\n", ans);
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << '\n';
//	}
//	return 0;
//
//}