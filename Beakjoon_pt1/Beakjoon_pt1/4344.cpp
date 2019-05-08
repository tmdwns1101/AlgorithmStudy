//#include<iostream>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//double score[1001];
//int n;
//int main() {
//	int c;
//
//	cin >> c;
//
//	while (c--) {
//		scanf("%d", &n);
//		double sum = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%lf", &score[i]);
//			sum += score[i];
//		}
//		double average = sum / n;
//
//		double cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (score[i] > average) cnt++;
//		}
//		double ans = (cnt / (double)n) * 100;
//		printf("%.3f", ans);
//		cout << '%' << '\n';
//		//cout << ans << '%' << '\n';
//	}
//
//}