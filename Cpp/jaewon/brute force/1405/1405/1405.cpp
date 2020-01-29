// 1405.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <cstdio>
#include <algorithm>
using namespace std;

int n, visited[30][30];
double p[4];
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

double dfs(int x, int y, int cnt) {
	if (cnt == 0)return 1.0;
	double ret = 0.0;
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int cx = x + dx[i];
		int cy = y + dy[i];
		if (visited[cx][cy])
			continue;
		ret += dfs(cx, cy, cnt - 1)*p[i];
	}
	visited[x][y] = false;
	return ret;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < 4; i++) {
		scanf("%lf", &p[i]);
		p[i] /= 100.0;
	}
	printf("%.9lf\n", dfs(15, 15, n));
	return 0;
}
