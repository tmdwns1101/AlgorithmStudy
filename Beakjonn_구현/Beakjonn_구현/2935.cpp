//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	string A;
//	string B;
//	char oper;
//
//	int maxLength = 0;
//	int minLength = 0;
//
//	cin >> A >> oper >> B;
//
//	A.length() >= B.length() ? maxLength = A.length() : maxLength = B.length();
//
//	A.length() <= B.length() ? minLength = A.length() : minLength = B.length();
//
//	
//	if (oper == '+') {
//		if (maxLength == minLength) {
//			printf("2");
//			for (int i = maxLength - 1; i > 0; i--) {
//				printf("0");
//			}
//
//		}
//		else {
//			printf("1");
//			for (int i = maxLength - 1; i > 0; i--) {
//				if (i == minLength) {
//					printf("1");
//				}
//				if(i != 1)
//				printf("0");
//			}
//		}
//	}
//	else if (oper == '*') {
//		printf("1");
//		int size = (minLength - 1) + (maxLength - 1);
//		for (int i = 0; i < size; i++) {
//			printf("0");
//		}
//	}
//	printf("\n");
//	
//	return 0;
//}