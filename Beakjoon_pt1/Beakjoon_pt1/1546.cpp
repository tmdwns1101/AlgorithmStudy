//#include<iostream>
//#include<vector>
//#pragma warning(disable : 4996)
//using namespace std;
//
//int main() {
//
//	int n;
//
//	cin >> n;
//	vector<double> v(n);
//
//	
//	double max = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &v[i]);
//		if (max < v[i]) max = v[i];
//	}
//	double ans = 0;
//	double sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += ((v[i] / max) * 100);
//	}
//
//	ans = sum / n;
//
//	cout << ans << endl;
//
//}