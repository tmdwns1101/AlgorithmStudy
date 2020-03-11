/*
BOJ 유저의 수와 친구 관계가 입력으로 주어졌을 때, 
케빈 베이컨의 수가 가장 작은 사람을 구하는 프로그램을 작성하시오.



입력
첫째 줄에 유저의 수 N (2 ≤ N ≤ 100)과 친구 관계의 수 M (1 ≤ M ≤ 5,000)이 주어진다. 
둘째 줄부터 M개의 줄에는 친구 관계가 주어진다. 친구 관계는 A와 B로 이루어져 있으며,
A와 B가 친구라는 뜻이다. A와 B가 친구이면, B와 A도 친구이며, A와 B가 같은 경우는 없다.
친구 관계는 중복되어 들어올 수도 있으며, 친구가 한 명도 없는 사람은 없다. 
또, 모든 사람은 친구 관계로 연결되어져 있다.

출력
첫째 줄에 BOJ의 유저 중에서 케빈 베이컨의 수가 가장 작은 사람을 출력한다. 
그런 사람이 여러 명일 경우에는 번호가 가장 작은 사람을 출력한다.
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<vector<int>> adj;

int visited[101];
int N;
int BFS(int start);
void init();

int main() {

	int M, result, min, ans;
	int u, v;

	cin >> N >> M;

	adj.resize(N + 1);

	for (int i = 0; i < M; i++) {
		
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	min = 100, ans = 0;

	for (int i = 1; i <= N; i++) {
		init();
		result = BFS(i);
		if (result < min) {
			min = result;
			ans = i;
		}
	}

	cout << ans << '\n';

	return 0;
}
void init() {
	for (int i = 0; i <= N; i++)
		visited[i] = 0;
}
int BFS(int start) {
	queue<int> q;
	int step = 0, curr, size;

	q.push(start);

	while (!q.empty()) {
		size = q.size();

		for (int j = 0; j < size; j++) {
			curr = q.front();
			q.pop();

			for (int i = 0; i < adj[curr].size(); i++) {
				if (visited[adj[curr][i]] == 0) {
					visited[adj[curr][i]] = step + 1;
					q.push(adj[curr][i]);
				}
			}
		}
		step++;
	}

	step = 0;

	for (int i = 1; i <= N; i++) {
		if (i == start)
			continue;
		step += visited[i];
	}

	return step;
}