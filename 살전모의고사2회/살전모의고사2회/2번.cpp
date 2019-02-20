//#include <string>
//#include <vector>
//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//vector<int> ary;
//bool Check(int mid,int l) {
//	for (int i = 0; i < ary.size(); i++) {
//		if (i == 0) {
//			if (ary[0] > mid) {
//				return false;
//			}
//		}
//		else if (i == ary.size() - 1) {
//			if (l - ary[i] > mid) {
//				return false;
//			}
//		}
//		else {
//			if (ary[i] - ary[i - 1] > 2 * mid)
//				return false;
//		}
//	}
//	return true;
//}
//
//
//int solution(int l, vector<int> v) {
//	int answer = 0;
//	vector<vector<int>>board = {{11, 13, 15, 16
//}, { 12, 1, 4, 3
//}, { 10, 2, 7, 8
//}, { 5, 14, 6, 9 }};
//	cout << board.size();
//	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다. 
//	// cout << "Hello Cpp" << endl;
//
//	ary = v;
//	sort(ary.begin(), ary.end());
//
//	int left = 0;
//	int right = 1000000000;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (Check(mid,l)) {
//			right = mid - 1;
//			answer = mid;
//		}
//		else
//			left = mid + 1;
//	}
//	
//
//	return answer;
//}
//
//
//int main() {
//	vector<int> v = {2,5};
//	int I = 5;
//	int ans;
//	ans = solution(I, v);
//
//	cout << ans << endl;
//
//	
//}