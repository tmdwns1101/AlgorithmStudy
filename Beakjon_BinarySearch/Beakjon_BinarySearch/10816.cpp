
//version 1
//#include<iostream>
//#include<algorithm>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int card[500001];
//int hand_card[500001];
//
//int solution(int left, int right, int target) {
//	int result = 0;
//	if (left > right) {
//		return 0;
//	}
//	else {
//		int mid = (left + right) / 2;
//
//		if (card[mid] < target) {
//			result = solution(mid + 1, right, target);
//		}
//		else if (card[mid] > target) {
//			result = solution(left, mid - 1, target);
//		}
//		else {
//			result += 1;
//			result += solution(left, mid - 1, target);
//			result += solution(mid + 1, right, target);
//		
//		}
//
//		return result;
//	}
//}
//
//int main() {
//	int n, m;
//
//	cin >> n;
//
//	int input;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &card[i]);
//	}
//
//	sort(card, card + n);
//
//	cin >> m;
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &hand_card[i]);
//	}
//
//
//	for (int i = 0; i < m; i++) {
//		int cnt = 0;
//
//		cnt = solution(0, n-1, hand_card[i]);
//
//		printf("%d ", cnt);
//	}
//	cout << '\n';
//
//}



//version 2
#include<iostream>
#include<algorithm>
#pragma warning (disable : 4996)

using namespace std;


int card[500001];
int hand_card[500001];
int main() {
	int n, m;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &hand_card[i]);
	}

	sort(card, card + n);

	for (int i = 0; i < m; i++) {

		int cnt = upper_bound(card, card + n, hand_card[i]) - lower_bound(card, card + n, hand_card[i]);
		printf("%d ", cnt);
	}
	printf("\n");
}