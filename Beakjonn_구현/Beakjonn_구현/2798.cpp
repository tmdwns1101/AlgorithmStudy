//#include<iostream>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//using namespace std;
//
//
//int card[101];
//
//
//int Solution(int sum,int index, int cnt, int target,int size) {
//	if (cnt == 3) {
//		if (sum <= target) {
//			return sum;
//		}
//		else {
//			return -1;
//		}
//	}
//	
//	else {
//		if (index > size) {
//			return -1;
//		}
//
//		int leftMax = 0;
//		int rightMax = 0;
//
//		leftMax = Solution(sum + card[index], index + 1, cnt + 1, target,size);
//		rightMax = Solution(sum, index + 1, cnt, target,size);
//
//		return leftMax >= rightMax ? leftMax : rightMax;
//	}
//}
//
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &card[i]);
//	}
//	sort(card, card + n);
//
//	int ans = Solution(0, 0, 0, m,n-1);
//
//	if (ans == -1) {
//		printf("만들 수 있는 조합이 없습니다.\n");
//	}
//	else {
//		printf("%d\n", ans);
//	}
//	return 0;
//}