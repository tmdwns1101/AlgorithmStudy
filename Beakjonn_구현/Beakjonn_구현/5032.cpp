//#include<iostream>
//
//using namespace std;
//
//
//int main() {
//	int e, f, c;
//
//	cin >> e >> f >> c;
//	int ans = 0;
//	int change = 0;
//	int non = 0;
//
//	while ((e + f) / c > 0) {
//		change = (e + f) / c;
//		non = (e + f) % c ;
//		ans += change;
//		e = change;
//		f = non;
//
//	}
//
//	cout << ans << '\n';
//
//	return 0;
//}