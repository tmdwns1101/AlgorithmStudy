/*
신종 바이러스인 웜 바이러스는 네트워크를 통해 전파된다. 
한 컴퓨터가 웜 바이러스에 걸리면 그 컴퓨터와 네트워크 상에서 연결되어 있는 모든 컴퓨터는 웜 바이러스에 걸리게 된다.
어느 날 1번 컴퓨터가 웜 바이러스에 걸렸다. 컴퓨터의 수와 네트워크 상에서 서로 연결되어 있는 정보가 주어질 때, 
1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에는 컴퓨터의 수가 주어진다. 컴퓨터의 수는 100 이하이고 각 컴퓨터에는 1번 부터 차례대로 번호가 매겨진다. 
둘째 줄에는 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수가 주어진다. 이어서 그 수만큼 한 줄에 한 쌍씩 네트워크 상에서 직접 연결되어 있는 컴퓨터의 번호 쌍이 주어진다.

출력
1번 컴퓨터가 웜 바이러스에 걸렸을 때, 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 첫째 줄에 출력한다.
*/
/*
Algorithm : Graph
https://coderkoo.tistory.com/11
* 11724 연결요소 문제 참조
*/
#include <iostream>
#include <vector>
using namespace std;

const int VSIZE = 100 + 1;

int V, E; // 정점(Vertex), 간선(Edge)
int cnt(0);
vector<int> graph[VSIZE];
bool visited[VSIZE];

void DFS(int node) {

	visited[node] = true;

	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		// 다음 정점을 방문하지 않았다면 DFS
		if (!visited[next]) {
			DFS(next);
			cnt++;
		}
	}
}

int main()
{
	cin >> V >> E;

	for (int i = 0; i < E; i++) {
		int node1, node2;
		cin >> node1 >> node2;
		// 간선 연결
		graph[node1].push_back(node2);
		graph[node2].push_back(node1);
	}

	DFS(1);

	cout << cnt << '\n';

}
