//#include<iostream>
//
//using namespace std;
//
//
//
//int main() {
//	int person[1001] = { 0, };
//	int n,m,l;
//	person[1] = 1;
//	cin >> n >> m >> l;
//	int ans = 0;
//	int cur = 1;
//	int next = 1;
//	while (person[cur] < m) {
//		if (person[cur] % 2 == 0) {
//			ans++;
//			next = cur - l;
//			if (next < 1) next = n + next;
//		}
//		else {
//			ans++;
//			next = cur + l;
//			if (next > n) next = next - n;
//		}
//		cur = next;
//
//		person[cur]++;
//	}
//	
//	printf("%d\n", ans);
//
//	return 0;
//}