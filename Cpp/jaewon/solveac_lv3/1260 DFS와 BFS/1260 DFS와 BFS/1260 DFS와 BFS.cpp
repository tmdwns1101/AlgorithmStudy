/*
문제
그래프를 DFS로 탐색한 결과와 BFS로 탐색한 결과를 출력하는 프로그램을 작성하시오. 
단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 
더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.

입력
첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 
다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 
입력으로 주어지는 간선은 양방향이다.

출력
첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.
*/

#include <iostream>
#include <vector> // graph
#include <cstring> // memset
#include <algorithm> // sort
#include <queue> // BFS
using namespace std;

const int VSIZE = 1000 + 1;
int n, m, v;
vector<int> graph[VSIZE];
bool visited[VSIZE];
queue<int> q;

void DFS(int node) {
	visited[node] = true;
	cout << node << " ";

	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		if (!visited[next]) {
			DFS(next);
		}
	}

	return;
}

void BFS(int node) {
	q.push(node);
	visited[node] = true;
	while (!q.empty()) {
		node = q.front();
		q.pop();
		cout << node << " ";
		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];
			if (!visited[next]) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int num1, num2;
		cin >> num1 >> num2;
		// 간선연결
		graph[num1].push_back(num2);
		graph[num2].push_back(num1);
	}

	// 각 정점에서 연결된 다른 정점을 작은 순서대로 정렬
	for (int i = 0; i < n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	
	DFS(v);
	
	cout << '\n';
	memset(visited, false, VSIZE);

	BFS(v);
}

