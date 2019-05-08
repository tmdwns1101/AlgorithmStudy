//#include<iostream>
//#include<vector>
//#include<string>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	vector<string> ask(n);
//	vector<pair<int, int>> SB(n);
//
//
//	
//	for (int i = 0; i < n; i++) {
//		cin >> ask[i];
//		scanf("%d %d", &SB[i].first,&SB[i].second);
//	}
//
//	int ans = 0;
//
//	//vector<string> v;  //test
//
//	vector<string> templet;
//	
//	for (int i = 0; i < 9; i++) {
//		char one = '1' + i;
//		for (int j = 0; j < 9; j++) {
//			if (j != i) {
//				char two = '1' + j;
//				for (int k = 0; k < 9; k++) {
//					if (k != i && k != j) {
//						char three = '1' + k;
//						string result = "";
//						result.push_back(one);
//						result.push_back(two);
//						result.push_back(three);
//						templet.push_back(result);
//					}
//				}
//			}
//			
//		}
//	}
//
//	/*for (int i = 0; i < templet.size(); i++) {
//		cout << templet[i] << endl;
//	}*/  //test
//
//	for (int i = 0; i < templet.size(); i++) {
//
//		string cur = templet[i];
//		bool check = true;
//		for (int j = 0; j < n; j++) {
//			int strike = 0;
//			int ball = 0;
//			for (int k = 0; k < 3; k++) {
//				int idx = ask[j].find(cur[k]);
//				if (idx !=-1) {
//					if (idx == k) {
//						strike++;
//					}
//					else {
//						ball++;
//					}
//				}
//				
//			}
//			if (strike != SB[j].first || ball != SB[j].second) {
//				check = false;
//				break; 
//			}
//		}
//		if (check == true) {
//			ans++;
//			//v.push_back(cur);    //test 
// 		}
//	}
//
//	printf("%d\n", ans);
//	/*for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << endl;
//	}*/  //test
//	return 0;
//}