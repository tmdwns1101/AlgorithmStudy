//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	string A;
//	string B;
//
//	cin >> A >> B;
//
//	int min = 30;
//	int Aidx = 0;
//	int Bidx = 0;
//	for (int i = 0; i < B.length(); i++) {
//		Aidx = A.find(B[i]);
//		if (Aidx != -1) {
//			if (Aidx < min) {
//				min = Aidx;
//				Bidx = i;
//			}
//		}
//	}
//	int M = A.length();
//	int N = B.length();
//	int k = 0;
//	for (int i = 0; i < N; i++) {
//		if (i != Bidx) {
//			for (int j = 0; j < M; j++) {
//				if (j == min) {
//					cout << B[k];
//				}
//				else cout << '.';
//			}
//			printf("\n");
//			k++;
//		}
//		else {
//			for (int j = 0; j < M; j++) {
//				cout << A[j];
//			}
//			printf("\n");
//			k++;
//		}
//	}
//	return 0;
//}