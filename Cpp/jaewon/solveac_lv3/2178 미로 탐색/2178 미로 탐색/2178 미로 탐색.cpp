﻿/*
N×M크기의 배열로 표현되는 미로가 있다.

1	0	1	1	1	1
1	0	1	0	1	0
1	0	1	0	1	1
1	1	1	0	1	1
미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다. 
이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 
지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오. 
한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.

위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.

입력
첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 
다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 붙어서 입력으로 주어진다.

출력
첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.
*/

#include <iostream>
#include <queue>
using namespace std;

const int SIZE = 100 + 1;
int n, m;
char node[SIZE][SIZE];
bool visited[SIZE][SIZE];
int dx[4] = { 1, -1, 0, 0 };    //동 서 남 북
int dy[4] = { 0, 0, -1, 1 };    //동 서 남 북


int BFS() {
	queue<pair<pair<int,int>,int>> q;
	q.push(make_pair(make_pair(0, 0), 1));
	visited[0][0] = 1;

	while (!q.empty()) {

		int x = q.front().first.second;
		int y = q.front().first.first;
		int dis = q.front().second;

		q.pop();

		if (x == m - 1 && y == n - 1)
			return dis;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n)
				continue;
			if (visited[ny][nx] == 1)
				continue;
			if (node[ny][nx] != '1')
				continue;

			q.push(make_pair(make_pair(ny, nx), dis + 1));
			visited[ny][nx] = 1;
		}

	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> node[i];
	}

	cout << BFS();
}
