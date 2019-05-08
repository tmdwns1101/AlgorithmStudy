//#include<iostream>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int ary[5][5];
//
//int main() {
//
//	int max = 0;
//	int ans = 0;
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		sum = 0;
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &ary[i][j]);
//			sum += ary[i][j];
//		}
//		if (max < sum) {
//			max = sum;
//			ans = i+1;
//		}
//	}
//
//	printf("%d %d\n", ans, max);
//}