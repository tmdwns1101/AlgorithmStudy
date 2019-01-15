//#include<vector>
//#include<cstdio>
//#include<algorithm>
//
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//
//struct schedule {
//	int begin;
//	int end;
//};
//
//bool Cmp(const schedule& s1, const schedule& s2) {
//	if (s1.end == s2.end)
//		return s1.begin < s2.begin;
//	else
//		return s1.end < s2.end;
//}
//
//
//
//int main() {
//	int n;
//	int now=0;
//	int ans=0;
//
//	scanf("%d", &n);
//	vector<schedule> s(n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %d", &s[i].begin, &s[i].end);
//	}
//	sort(s.begin(), s.end(), Cmp);
//
//	for (int i = 0; i < s.size(); i++) {
//		if (now <= s[i].begin) {
//			now = s[i].end;
//			ans += 1;
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}