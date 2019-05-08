#include<iostream>
#include<string>
#include<vector>

#pragma warning(disable : 4996)

using namespace std;


//version 1 시간 초과

//int main() {
//	int n, m; //n : 세로 길이  m : 가로 길이
//
//	cin >> n >> m;
//
//	int k; // 탐사 개수;
//	
//	cin >> k;
//	vector<string> s(n+1);
//
//	for (int i = 1; i <= n; i++) {
//		cin >> s[i];
//	}
//
//	while (k--) {
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		int Jcnt = 0;
//		int Ocnt = 0;
//		int Icnt = 0;
//
//		for (int i = a; i <= c; i++) {
//			for (int j = b-1; j <= d-1; j++) {
//				if (s[i][j] == 'J') Jcnt++;
//				else if (s[i][j] == 'O') Ocnt++;
//				else Icnt++;
//			}
//		}
//
//		printf("%d %d %d\n", Jcnt, Ocnt, Icnt);
//	}
//
//	return 0;
//}


//version 2 char 배열 사용

//char map[1001][1001];
//
//int main() {
//	int n, m; //n : 세로 길이  m : 가로 길이
//	
//	cin >> n >> m;
//	
//	int k; // 탐사 개수;
//		
//	cin >> k;
//	
//	for (int i = 1; i <= n; i++) {
//			cin >> map[i];
//	}
//	
//	while (k--) {
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		int Jcnt = 0;
//		int Ocnt = 0;
//		int Icnt = 0;
//				
//		for (int i = a; i <= c; i++) {
//			for (int j = b-1; j <= d-1; j++) {
//				if (map[i][j] == 'J') Jcnt++;
//				else if (map[i][j] == 'O') Ocnt++;
//				else Icnt++;
//				}
//			}
//	
//		printf("%d %d %d\n", Jcnt, Ocnt, Icnt);
//	}
//	
//	return 0;
//}


//version 3

//char map[1001][1001];
//int J[1001][1001] = { 0 };
//int O[1001][1001] = { 0 };
//int I[1001][1001] = { 0 };
//
//int main() {
//	int n, m;
//	
//	cin >> n >> m;
//	
//	int k;
//	cin >> k;
//
//	for (int i = 1; i <= n; i++) {
//		scanf("%s", &map[i]);
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 'J') J[i][j+1] += J[i][j] +1;
//			else J[i][j + 1] += J[i][j];
//	
//			if (map[i][j] == 'O') O[i][j+1] += O[i][j] + 1;
//			else  O[i][j + 1] += O[i][j];
//			
//			if(map[i][j] == 'I') I[i][j+1] += I[i][j] + 1;
//			else I[i][j + 1] += I[i][j];
//		}
//	}
//
//	while (k--) {
//		int a, b, c, d;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		int Jcnt = 0;
//		int Ocnt = 0;
//		int Icnt = 0;
//
//		for (int i = a; i <= c; i++) {
//			Jcnt += J[i][d] - J[i][b - 1];
//			Ocnt += O[i][d] - O[i][b - 1];
//			Icnt += I[i][d] - I[i][b - 1];
//		}
//
//		printf("%d %d %d\n", Jcnt, Ocnt, Icnt);
//	}
//	return 0;
//}