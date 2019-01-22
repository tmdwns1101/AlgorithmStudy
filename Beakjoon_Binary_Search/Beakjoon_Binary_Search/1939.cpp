#include<iostream>
#include<cstring>
#include<vector>

#pragma warning(disable :4996)

using namespace std;


int start;
int ed;
vector<pair<int,int>> a[100001];
int c[100001];


bool Bfs(int node, int limit) {
	if (c[node]) {
		return false;
	}
	c[node] = true;

	if (node == ed)  //바로 목적지로 도착한  경우 탐색 종료
		return true;

	auto &p = a[node].at(0);
	
	for (auto &p : a[node]) {
		int next = p.first;
		int cost = p.second;
		if (cost >= limit) {
			if (Bfs(next, limit)) {
				return true;
			}
		}
	}

	return false;
}


int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	while (m--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(make_pair(y, z));
		a[y].push_back(make_pair(x, z));
	}

	scanf("%d %d", &start, &ed);

	int left = 1;
	int right = 1000000000;
	int mid;
	int ans;
	while (left <= right) {
		mid = left + (right - left) / 2;
		memset(c, false, sizeof(c));
		if (Bfs(start, mid)) {
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	printf("%d\n", ans);

	return 0;
}