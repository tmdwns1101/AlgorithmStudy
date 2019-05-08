#include<iostream>
#pragma warning(disable :4996)

using namespace std;

char board[51][51];




char checkBoard1[8][8] = {
	{'W','B','W','B', 'W','B', 'W','B'}
	,{'B','W','B','W', 'B','W', 'B','W'}
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
};

char checkBoard2[8][8] = {
	{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
	,{ 'B','W','B','W', 'B','W', 'B','W' }
	,{ 'W','B','W','B', 'W','B', 'W','B' }
};

int Count(int sCol, int eCol, int sLow, int eLow) {
	int ans1 = 0;
	int ans2 = 0;
	int k = 0;
	int z = 0;
	
		for (int i = sLow; i <= eLow; i++) {
			z = 0;
			for (int j = sCol; j <= eCol; j++) {
				if (board[i][j] != checkBoard1[k][z]) {
					ans1++;
				}
				if (board[i][j] != checkBoard2[k][z]) {
					ans2++;
				}
				z++;
			}
			k++;
		}
	
	
	return ans1 < ans2 ? ans1 : ans2;
}


int main() {
	int n, m;
	cin >> n >> m;


	for (int i = 0; i < n; i++) {
			scanf("%s", &board[i]);
		
	}
	

	int min = 1000;
	int cur = 0;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			cur = Count(j, j + 7, i, i + 7);
			if (cur < min) min = cur;
		}
	}
	printf("%d\n", min);
}