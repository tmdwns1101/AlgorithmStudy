/*
문제
방향 없는 그래프가 주어졌을 때, 연결 요소 (Connected Component)의 개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정점의 개수 N과 간선의 개수 M이 주어진다. 
(1 ≤ N ≤ 1,000, 0 ≤ M ≤ N×(N-1)/2) 둘째 줄부터 M개의 줄에 간선의 양 끝점 u와 v가 주어진다.
(1 ≤ u, v ≤ N, u ≠ v) 같은 간선은 한 번만 주어진다.

출력
첫째 줄에 연결 요소의 개수를 출력한다.
*/
/*
연결요소란 원그래프 G 가운데 노드와 엣지가 서로 겹치지 않는 부그래프이되, 부그래프 내 모든 노드쌍에 대해 경로가 존재하는 걸 가리킵니다. 
연결요소를 구축하는 기법은 디스조인트 셋(Disjoint Set)으로 구현하게 됩니다. 예컨대 원그래프 G에 아래와 같은 연결요소들 4개가 있다고 칩시다.

연결요소를 구축하는 알고리즘은 엣지를 중심으로 수행합니다. 위 그래프의 엣지 리스트는 다음과 같습니다.

(b,d)
(e,g)
(a,c)
(h,i)
(a,b)
(e,f)
(b,c)
우선 모든 노드에 대해 make-set 연산을 수행합니다. 각 노드를 유일한 원소로 하는 새로운 셋을 만든다는 뜻입니다.

{a}, {b}, {c}, {d}, {e}, {f}, {g}, {h}, {i}, {j}

이제 그래프 내 모든 엣지를 하나씩 검토합니다. 우선 첫번째 엣지인 (b,d)를 보겠습니다. 노드 b가 속한 셋의 대표값(루트노드)을 찾습니다(find 연산). 
그리고 c의 대표값을 찾습니다. 둘을 비교하니 서로 다르므로(b≠c) 두 셋을 합칩니다(union 연산). 결과는 다음과 같습니다.

{a}, {b,d}, {c}, {e}, {f}, {g}, {h}, {i}, {j}

다음 (e,g)를 보겠습니다. e가 포함된 셋과 g의 셋이 서로 다르므로 두 셋을 합칩니다. (a,c), (h,i), (a,b), (e,f)도 마찬가지입니다. 다음과 같습니다.

{a,b,c,d}, {e,f,g}, {h,i}, {j}

마지막으로 (b,c)를 보겠습니다. b가 포함된 셋의 루트노드와 c가 포함된 셋의 루트노드가 a로 서로 같습니다. 이대로 연산을 마칩니다. 다음과 같습니다.

{a,b,c,d}, {e,f,g}, {h,i}, {j}

이렇게 만든 연결요소가 있고, 임의의 노드 u와 v가 같은 연결요소 내에 있는지 여부를 가려내려면 다음과 같이 수행합니다.

find(u)와 find(v)가 같은 결과이면 True
그렇지 않으면 False
https://ratsgo.github.io/data%20structure&algorithm/2017/11/24/CC/
*/

#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000 + 1;
int M, N;
vector<int> graph[MAX];
bool visited[MAX];

void DFS(int node)
{
    visited[node] = true;

    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];
        //node에 연결된 다른 정점을 모두 방문
        //이미 방문했다면 방문하지 않는다
        if (!visited[next])
            DFS(next);
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        //undirected graph
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++)
        if (!visited[i])
        {
            DFS(i);
            cnt++;
        }

    cout << cnt << endl;
}
