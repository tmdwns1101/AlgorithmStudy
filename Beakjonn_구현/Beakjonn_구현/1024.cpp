//½ÇÆÐ//

//#include<iostream>
//
//using namespace std;
//
//#define MAX 1000000000
//
//int main() {
//	long long N;
//	int L;
//
//	cin >> N >> L;
//
//	if (L >= 100) {
//		printf("-1\n");
//
//		return 0;
//	}
//
//	long long x;
//
//	x = (N - (L*(L + 1) / 2)) / (L + 1);
//
//	long long sum = 0;
//	int idx = 0;
//	bool check = false;
//	for (int i = 0; i <= L; i++) {
//		sum += (x + i);
//		if (sum == N) {
//			check = true;
//			idx = i;
//			break;
//		}
//	}
//	
//	
//
//	if (check == true) {
//		for (int i = 0; i <= idx; i++) {
//			printf("%d ", x + i);
//		}
//		printf("\n");
//	}
//	else {
//		printf("-1\n");
//	}
//	
//	return 0;
//
//}