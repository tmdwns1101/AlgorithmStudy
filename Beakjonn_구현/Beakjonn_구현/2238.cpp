//#include<iostream>
//#include<list>
//#include<string>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//#define MAX_VALUE 10000
//
//
//int main() {
//	list<pair<string, int>> List[MAX_VALUE + 1];
//
//	int u, n;
//
//	cin >> u >> n;
//	string s;
//	int p;
//	
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		scanf("%d", &p);
//		List[p].push_back(make_pair(s, p));
//	}
//
//	int min = 100000;
//
//	int min_value;
//
//	for (int i = 1; i <= u; i++) {
//		if (List[i].size() == 0) continue;
//		if (min > List[i].size()) {
//			min = List[i].size();
//			min_value = i;
//		}
//	}
//
//	cout << List[min_value].front().first << " " << List[min_value].front().second << "\n";
//
//	return 0;
//
//}