/*
어떤 배추에 배추흰지렁이가 한 마리라도 살고 있으면 이 지렁이는 인접한 다른 배추로 이동할 수 있어, 
그 배추들 역시 해충으로부터 보호받을 수 있다.

(한 배추의 상하좌우 네 방향에 다른 배추가 위치한 경우에 서로 인접해있다고 간주한다)

한나가 배추를 재배하는 땅은 고르지 못해서 배추를 군데군데 심어놓았다. 
배추들이 모여있는 곳에는 배추흰지렁이가 한 마리만 있으면 되므로 
서로 인접해있는 배추들이 몇 군데에 퍼져있는지 조사하면 총 몇 마리의 지렁이가 필요한지 알 수 있다.

입력
입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 
그 다음 줄부터 각각의 테스트 케이스에 대해 
첫째 줄에는 배추를 심은 배추밭의 가로길이 M(1 ≤ M ≤ 50)과 세로길이 N(1 ≤ N ≤ 50), 
그리고 배추가 심어져 있는 위치의 개수 K(1 ≤ K ≤ 2500)이 주어진다. 
그 다음 K줄에는 배추의 위치 X(0 ≤ X ≤ M-1), Y(0 ≤ Y ≤ N-1)가 주어진다.

출력
각 테스트 케이스에 대해 필요한 최소의 배추흰지렁이 마리 수를 출력한다.
*/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int t, m, n, k, x, y;
int dx[4] = { 1, -1, 0, 0 }; // 동서남북
int dy[4] = { 0, 0, -1, 1 };
bool location[51][51];
bool visited[51][51];

void DFS(int x, int y) {

	for (int i = 0; i < 4; i++) {

		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx<0 || nx>=m || ny<0 || ny>=n) 
			continue;
		if (location[nx][ny] && !visited[nx][ny]) {
			visited[nx][ny] = true;
			DFS(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio;
	cin.tie(0);

	cin >> t;
	while (t--) {
		int cnt = 0;
		memset(location, false, sizeof(location));
		memset(visited, false, sizeof(visited));

		//fill(location, location + sizeof(location), false);
		//fill(visited, visited + sizeof(visited), false);

		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			int num1, num2;
			cin >> num1 >> num2;
			location[num1][num2] = true;
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (location[i][j] && !visited[i][j]) {
					visited[i][j] = true;
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}
