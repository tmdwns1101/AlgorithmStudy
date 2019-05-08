//#include<iostream>
//#include<cstring>
//#include<vector>
//using namespace std;
//
//bool check[100];
//
//
//int main() {
//	int n;
//	memset(check, false, sizeof(check));
//
//	cin >> n;
//	int flag;
//	vector<int> v(2);
//	if (n / 10 == 0) {
//		v[1] = n % 10;
//		v[0] = 0;
//		flag = v[1];
//	}
//	else {
//		v[0] = n / 10;
//		v[1] = n % 10;
//		flag = 10 * v[0] + v[1];
//	}
//	
//	check[flag] = true;
//
//	int ans = 0;
//	while (1) {
//		
//		int temp;
//		temp = (v[0] + v[1]) % 10;
//		v[0] = v[1];
//		v[1] = temp;
//		if (check[10*v[0]+v[1]]==true) {
//			break;
//		}
//		ans++;
//		
//
//	}
//
//	printf("%d\n", ans+1);
//
//	return 0;
//}