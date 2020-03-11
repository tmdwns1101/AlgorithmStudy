/*
정사각형 모양의 지도가 있다. 1은 집이 있는 곳을, 0은 집이 없는 곳을 나타낸다. 
철수는 이 지도를 가지고 연결된 집들의 모임인 단지를 정의하고, 단지에 번호를 붙이려 한다.
여기서 연결되었다는 것은 어떤 집이 좌우, 혹은 아래위로 다른 집이 있는 경우를 말한다. 
대각선상에 집이 있는 경우는 연결된 것이 아니다.
지도를 입력하여 단지수를 출력하고, 각 단지에 속하는 집의 수를 
오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.

입력
첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고,
그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

출력
첫 번째 줄에는 총 단지수를 출력하시오. 
그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 30;
int n, cnt = 0; // cnt : 단지 수
int node[SIZE][SIZE];
bool visited[SIZE][SIZE];
int house[1000]; // 단지 내 아파트 수
int dx[4] = { 1, -1, 0, 0 }; // 동, 서, 남, 북
int dy[4] = { 0, 0, 1, -1 }; // 동, 서, 남, 북

void dfs(int x, int y) {
	visited[x][y] = true;
	house[cnt]++;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < n && ny < n) { // nx, ny는 0이상 n미만
			if (!visited[nx][ny] && node[nx][ny]) { // 방문 안했고 값이 1이면
				dfs(nx, ny);
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf_s(" %1d", &node[i][j]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (node[i][j] && !visited[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	sort(house, house + cnt);

	cout << cnt << '\n';
	for (int i = 0; i < cnt; i++) {
		cout << house[i] << '\n';
	}
}
