/*
문제
N×N크기의 행렬로 표현되는 종이가 있다. 종이의 각 칸에는 -1, 0, 1의 세 값 중 하나가 저장되어 있다. 
우리는 이 행렬을 적절한 크기로 자르려고 하는데, 이때 다음의 규칙에 따라 자르려고 한다.

만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
(1)이 아닌 경우에는 종이를 같은 크기의 9개의 종이로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수, 
1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.

입력
첫째 줄에 N(1≤N≤3^7, N은 3^k 꼴)이 주어진다. 다음 N개의 줄에는 N개의 정수로 행렬이 주어진다.

출력
첫째 줄에 -1로만 채워진 종이의 개수를, 둘째 줄에 0으로만 채워진 종이의 개수를, 
셋째 줄에 1로만 채워진 종이의 개수를 출력한다.
*/
// 3^7 = 2187
#include <iostream>
using namespace std;

const int SIZE = 2187 + 1;
int n;
int arr[SIZE][SIZE];
int result[3] = { 0 }; // result[0] : -1, result[1] : 0, result[2] : 1

void check(int nodeX, int nodeY, int n) {
	
	if (n == 1) {
		result[arr[nodeX][nodeY] + 1]++;
		return;
	}

	bool minus(true), zero(true), plus(true);

	for (int i = nodeX; i < nodeX + n; i++) {
		for (int j = nodeY; j < nodeY + n; j++) {
			switch (arr[i][j]) {
			case 1:
				minus = false;
				zero = false;
				break;
			case 0:
				minus = false;
				plus = false;
				break;
			case -1:
				zero = false;
				plus = false;
				break;
			}
		}
	}
	if (minus)
		result[0]++;
	else if (zero)
		result[1]++;
	else if (plus)
		result[2]++;
	else {
		n /= 3;
		check(nodeX, nodeY, n);
		check(nodeX, nodeY + n, n);
		check(nodeX, nodeY + n * 2, n);

		check(nodeX + n, nodeY, n);
		check(nodeX + n, nodeY + n, n);
		check(nodeX + n, nodeY + n * 2, n);

		check(nodeX + n * 2, nodeY, n);
		check(nodeX + n * 2, nodeY + n, n);
		check(nodeX + n * 2, nodeY + n * 2, n);
	}
	return;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	check(0, 0, n);

	for (int i = 0; i < 3; i++) {
		cout << result[i] << '\n';
	}
}
