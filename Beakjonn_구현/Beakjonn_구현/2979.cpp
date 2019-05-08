//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//int fee[101] = { 0, };
//
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	vector<pair<int, int>> v(3);
//
//	int st, ed;
//	int max = 0;
//	for (int i = 0; i < 3; i++) {
//		cin >> st >> ed;
//		v[i].first = st;
//		v[i].second = ed;
//		if (max < ed) {
//			max = ed;
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = v[i].first; j < v[i].second; j++) {
//			fee[j]++;
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i < max; i++) {
//		if (fee[i] == 1) ans += a;
//		else if (fee[i] == 2) ans += b*2;
//		else if(fee[i] ==3) ans += c*3;
//		else ans += 0;
//	}
//
//	printf("%d\n", ans);
//	return 0;
//	
//}