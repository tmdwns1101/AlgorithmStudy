//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//int main() {
//	string seat;
//	int n;
//	bool check[100];
//	memset(check, false, sizeof(check));
//	
//	cin >> n>> seat;
//	int k = 0;
//	for (int i = 0; i < n; i++) {
//		if (seat[i] == 'S') {
//			check[k] = true;
//			check[++k] = true;
//		}
//		else {
//			i++;
//			check[k] = true;
//			check[++k] = true;
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < 100; i++) {
//		if (check[i] == true) {
//			ans++;
//		}
//		else {
//			break;
//		}
//	}
//	if (ans <= n) {
//		printf("%d\n", ans);
//	}
//	else {
//		printf("%d\n", n);
//	}
//
//	return 0;
//}