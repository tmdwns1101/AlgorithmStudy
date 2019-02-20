#include<iostream>
#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	vector<int> v(8);
//
//	for (int i = 0; i < 8; i++) {
//		cin >> v[i];
//	}
//	
//	bool check[2] = { false ,false };
//
//	for (int i = 0; i < 7; i++) {
//		if (v[i] < v[i + 1]) {
//			check[1] = true;
//		}
//		else {
//			check[0] = true;
//		}
//	}
//
//	if (check[1] == true && check[0] == false) {
//		printf("ascending\n");
//	}
//	else if (check[1] == false && check[0] == true) {
//		printf("descending\n");
//	}
//	else if (check[1] == true && check[0] == true) {
//		printf("mixed\n");
//	}
//
//	return 0;
//}