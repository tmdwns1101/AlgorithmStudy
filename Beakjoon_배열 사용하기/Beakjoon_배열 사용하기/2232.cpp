//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//int ary[50002];
//vector<int> ans;
//
//void Solution(int st, int ed) {
//
//	int max = 0;
//	int max_index;
//	for (int i = st; i <= ed; i++) {
//		if (max < ary[i]) {
//			max = ary[i];
//			max_index = i;
//			
//		}
//	}
//
//	int left = max;
//	int right = max;
//	ans.push_back(max_index);
//	
//
//	//search left
//	for (int i = max_index - 1; i >= st; i--) {
//		if (left > ary[i]) {
//			left = ary[i];
//		}
//		else {
//			Solution(st, i);
//			break;
//		}
//	}
//
//	//search right
//	for (int i = max_index + 1; i <= ed; i++) {
//		if (right > ary[i]) {
//			right = ary[i];
//		}
//		else {
//			Solution(i, ed);
//			break;
//		}
//	}
//
//}
//
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &ary[i]);
//	}
//
//	Solution(0, n - 1);
//
//	sort(ans.begin(), ans.end());
//
//	
//
//	for (int i = 0; i < ans.size(); i++) {
//		printf("%d\n", ans[i]+1);
//	}
//
//	return 0;
//}