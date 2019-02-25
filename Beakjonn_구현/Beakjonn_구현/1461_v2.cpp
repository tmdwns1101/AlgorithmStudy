//#include<iostream>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//using namespace std;
//
//#define MAX 10000
//
//int leftAry[MAX];
//int rightAry[MAX];
//
//int left_index = 0;
//int right_index = 0;
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		int num;
//		scanf("%d", &num);
//		if (num < 0) {
//			leftAry[left_index] = (-1*num);
//			left_index++;
//		}
//		else {
//			rightAry[right_index] = num;
//			right_index++;
//		}
//	}
//
//	sort(leftAry, leftAry + left_index);
//	sort(rightAry, rightAry + right_index);
//
//	int ans = 0;
//	if (leftAry[left_index - 1] < rightAry[right_index - 1]) {
//		ans += rightAry[right_index - 1];
//		right_index -= m;
//	}
//	else {
//		ans += leftAry[left_index - 1];
//		left_index -= m;
//	}
//	while (left_index >= 0 || right_index >= 0) {
//		if (left_index >= 0) {
//			ans += leftAry[left_index-1]*2;
//			left_index -= m;
//		}
//		if (right_index >= 0) {
//			ans += rightAry[right_index - 1] * 2;
//			right_index -= m;
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}