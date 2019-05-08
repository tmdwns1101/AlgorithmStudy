//#include<iostream>
//#include<string>
//#include<cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//char piterFlame[5][5] = { {'.','.','#','.','.'}, {'.','#','.','#','.'}, {'#','.', ' ' ,'.','#'},{ '.','#','.','#','.' },{ '.','.','#','.','.' } };
//char wendyFlame[5][5] = { { '.','.','*','.','.' },{ '.','*','.','*','.' },{ '*','.', ' ' ,'.','*' },{ '.','*','.','*','.' },{ '.','.','*','.','.' } };
//
//
//char result[5][61];
//
//int main() {
//	
//	string s;
//	
//	
//	cin >> s;
//	int checkPoint = 0;
//	for (int i = 0; i<s.size(); i++) {
//		
//		if ((i+1) % 3 != 0) {
//		
//			piterFlame[2][2] = s[i];
//			for (int j = 0; j < 5; j++) {
//				for (int k = 0; k < 5; k++) {
//					if (result[j][k + checkPoint] == '*') continue;
//					result[j][k+checkPoint] = piterFlame[j][k];
//					
//				}
//			}
//			checkPoint += 4;
//		}
//		else {
//			
//			wendyFlame[2][2] = s[i];
//			for (int j = 0; j < 5; j++) {
//				for (int k = 0; k < 5; k++) {
//					result[j][k+checkPoint] = wendyFlame[j][k];
//					
//				}
//			}
//			checkPoint += 4;
//		}
//	}
//
//	int max = 5 * s.size() - s.size();
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j <= max; j++) {
//			printf("%c", result[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}