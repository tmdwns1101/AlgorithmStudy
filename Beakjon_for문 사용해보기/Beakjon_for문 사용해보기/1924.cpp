#include<iostream>
#include<string>
#include<cstring>
#pragma warning(disable : 4996)

using namespace std;

/*version 1*/

//int check_day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//string input_day[6] = { "TUE", "WED", "THU", "FRI", "SAT","SUN" };
//
//int main() {
//	int x, y;
//	string days[13][32];
//	int month = 1;
//	
//	scanf("%d %d", &x, &y);
//
//	int k=1;
//	
//
//	for (int i = k;; i=k+1) {
//		int m = 6;
//		if (days[12][31].length() != 0)
//			break;
//
//		if (i <= check_day[month]) {
//			days[month][i] = "MON";
//			k = i;
//		}
//		else {
//			month++;
//			days[month][i - check_day[month-1]] = "MON";
//			k = i - check_day[month-1];
//		}
//		while (m) {
//			if (days[12][31].length() != 0)
//				break;
//			int j = k + 1;
//				if (j > check_day[month]) {
//					month++;
//					days[month][j - check_day[month-1]] = input_day[6 - m];
//					k = j - check_day[month-1];
//				}
//				else {
//					days[month][j] = input_day[6 - m];
//					k = j;
//				}
//				m--;
//		}
//	}
//
//	cout << days[x][y] << "\n";
//}



/*version 2*/
//int check_day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//string input_day[7] = { "MON","TUE", "WED", "THU", "FRI", "SAT","SUN" };
//
//int main() {
//	int x, y;
//	scanf("%d %d", &x, &y);
//	string days[366];
//	int m = 0;
//	for (int i = 1; i <= 365; i++) {
//		days[i] = input_day[m];
//		m++;
//		if (m == 7) m = 0;
//	}
//	int target_day = 0;
//
//	for (int i = 0; i < x; i++) {
//		target_day += check_day[i];
//	}
//
//	target_day += y;
//
//	cout << days[target_day] << "\n";
//
//	return 0;
//}