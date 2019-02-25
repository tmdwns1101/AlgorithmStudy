
//version 1 타임 아웃

//접근 방법 : 1. 먼저 음수 부분 양수 부분을 나누어 저장 후 오름차순 정렬
//            2. 그 후 가장 큰 절대값은 정답에 더하기만 함. 나머지는 왔다 가야하므로 *2를 해야함
//            3. 왼쪽과 오른쪽을 따로 나누어 1~m개 선택 하여 모든 경우에 수 조사
//문제점     : 모든 경우에 수를 조사 하다보면, 최악의 경우 O(n!)(n은 최대 10000) 이 나오기 때문에 매우 비효율적

//n의 수가 적고, 최적의 m을 구하는 문제에 적용 가능

//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//
//
//#define MAX 20000
//
////falg == true is 절대값이 가장 큰 오른쪽이나 왼쪽
//
//
//
//int Solution(vector<int> v, int m ,int st, int ftCnt,bool flag) {  
//
//	int min = MAX;
//	int temp = MAX;
//	for (int i = 0; i < m && st + i < v.size(); i++) {
//		int ft = v[st+i] * 2;
//		
//		if (st + i + 1 == v.size()) {
//			if (flag == true) {
//				temp = ftCnt + v.back();
//			}
//			else {
//				temp = ftCnt + (v.back() * 2);
//			}
//		}
//		else {
//			temp = Solution(v, m, st + i + 1, ftCnt + ft, flag);
//		}
//		if (min > temp) {
//			min = temp;
//		}
//
//	}
//	return min;
//}
//
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	vector<int> left;
//	vector<int> right;
//
//	for (int i = 0; i < n; i++) {
//		int num;
//		scanf("%d", &num);
//		if (num < 0) left.push_back(-num);
//		else right.push_back(num);
//	}
//	sort(left.begin(), left.end());
//	sort(right.begin(), right.end());
//
//	int left_min = 0;
//	int right_min = 0;
//	if (left.size() > 0 && right.size() > 0)
//	{
//		if (left.back() > right.back()) {
//			left_min = Solution(left, m, 0, 0, true);
//			right_min = Solution(right, m, 0, 0, false);
//		}
//		else {
//			left_min = Solution(left, m, 0, 0, false);
//			right_min = Solution(right, m, 0, 0, true);
//		}
//	}
//	else if (left.size() == 0) {
//		right_min = Solution(right, m, 0, 0, true);
//	}
//	else {
//		left_min = Solution(left, m, 0, 0, true);
//	}
//
//	int ans = left_min + right_min;
//
//	printf("%d\n", ans);
//
//	return 0;
//}