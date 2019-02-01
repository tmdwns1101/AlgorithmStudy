#include<iostream>

using namespace std;



/* 모든 이친수 구하는 방법*/

// 완전 탐색(Brute forth Search)
// 시간 복잡도 = O(n!)

//#define MAX_SIZE 90
//
//int input_size;
//int cnt = 0;
//int Dp[MAX_SIZE];
//



//void Solution(int start) {
//	if (start == input_size) {
//		for (int i = 0; i < input_size; i++) {
//			cout << Dp[i] << ' ';
//		}
//		cout << "\n";
//		return;
//	}
//
//	if (Dp[start - 1] == 0) {
//		cnt += 1;
//		Dp[start] = 0;
//		Solution(start + 1);
//		Dp[start] = 1; 
//		Solution(start + 1);
//	}
//	else {
//		Dp[start] = 0;
//		Solution(start + 1);
//	}
//}
//
//
//int main() {
//	cin >> input_size;
//
//	Dp[0] = 1;
//	Dp[1] = 0;
//	cnt = 1;
//
//	if (input_size > 2) {
//		Solution(2);
//	}
//
//	cout << cnt << "\n";
//
//	return 0;
//
//
//}

//N개의 길이의 이친수 개수만 구하는 방법
//DP

//int input_size;
//long long Dp[91];
//
//int main() {
//	cin >> input_size;
//
//	Dp[0] = 0;
//	Dp[1] = 1;
//
//	for (int i = 2; i <= input_size; i++) {
//		Dp[i] = Dp[i - 2] + Dp[i - 1];
//	}
//
//	cout << Dp[input_size] << endl;
//
//	return 0;
//}