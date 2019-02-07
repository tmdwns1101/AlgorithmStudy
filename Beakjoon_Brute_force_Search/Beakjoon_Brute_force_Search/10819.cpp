//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int Calculate(vector<int> v) {
//	int result = 0;
//	for (int i = 1; i < v.size(); i++) {
//		result += abs(v[i] - v[i - 1]);
//	}
//
//	return result;
//}
//
//int main() {
//	int n;
//	int ans = 0;
//	cin >> n;
//	vector<int> v(n);
//
//
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//
//	sort(v.begin(),v.end());
//	do {
//		int temp = Calculate(v);
//		ans = max(ans, temp);
//	} while (next_permutation(v.begin(), v.end()));
//
//	printf("%d\n", ans);
//
//	return 0;
//}