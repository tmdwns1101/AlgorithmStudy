/*
크기가 N×N인 그리드의 각 칸에 R(빨강), G(초록), B(파랑) 중 하나를 색칠한 그림이 있다. 
그림은 몇 개의 구역으로 나뉘어져 있는데, 구역은 같은 색으로 이루어져 있다.
또, 같은 색상이 상하좌우로 인접해 있는 경우에 두 글자는 같은 구역에 속한다. 
(색상의 차이를 거의 느끼지 못하는 경우도 같은 색상이라 한다)

그림이 입력으로 주어졌을 때, 적록색약인 사람이 봤을 때와 아닌 사람이 봤을 때 
구역의 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (1 ≤ N ≤ 100)

둘째 줄부터 N개 줄에는 그림이 주어진다.

출력
적록색약이 아닌 사람이 봤을 때의 구역의 개수와 
적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다.
*/

#include <iostream>
#include <cstring>
using namespace std;

const int mSize = 100 + 1;
int n;
char color[mSize][mSize];
bool visited[mSize][mSize];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int cntC = 0;
int cntCP = 0;

void dfsC(int x, int y) {
	visited[x][y] = true;
	char target = color[x][y];

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < n && ny < n && ny >= 0 && nx >= 0) {
			if (!visited[nx][ny] && color[nx][ny] == target) {
				visited[nx][ny] = true;
				dfsC(nx, ny);
			}
		}
	}
}

void dfsCP(int x, int y) {
	visited[x][y] = true;
	char target = color[x][y];

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < n && ny < n && ny >= 0 && nx >= 0) {
			if (!visited[nx][ny]) {
				if (target == 'B' && color[nx][ny] == 'B') {
					visited[nx][ny] = true;
					dfsCP(nx, ny);
				}
				else if ((target == 'G' || target == 'R') && (color[nx][ny] == 'G' || color[nx][ny] == 'R')) {
					visited[nx][ny] = true;
					dfsCP(nx, ny);
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> color[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfsC(i, j);
				cntC++;
			}
		}
	}
	memset(visited, false, sizeof(visited));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				dfsCP(i, j);
				cntCP++;
			}
		}
	}

	cout << cntC << " " << cntCP << '\n';
}
