//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstring>
//
//#pragma warning(disable :4996)
//using namespace std;
//
//bool check[501];
//
//int main() {
//	int n, m;
//	memset(check, false, sizeof(check));
//	check[1] = true;
//	cin >> n >> m;
//
//	vector<pair<int, int>> v(m);
//
//
//	int f;
//	int s;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &f, &s);
//		
//		v[i].first = f;
//		v[i].second = s;
//	}
//	bool graph[501][501];
//	memset(graph, false, sizeof(graph));
//	
//	bool group[501];
//	memset(group, false, sizeof(group));
//	int ans = 0;
//	for (int i = 0; i < m; i++) {
//		if (v[i].first == 1 || v[i].second ==1) {
//
//			if (graph[v[i].first][v[i].second] == false) {
//				ans++;
//				graph[v[i].first][v[i].second] = true;
//				graph[v[i].second][v[i].first] = true;
//				check[v[i].first] = true;
//				check[v[i].second] = true;
//				group[v[i].first] = true;
//				group[v[i].second] = true;
//			}
//		}
//		
//	}
//
//	for (int i = 0; i < m; i++) {
//		
//		if(v[i].first != 1 && v[i].second !=1)
//		{
//			if ((check[v[i].first] == true && check[v[i].second] == false) || (check[v[i].first] == false && check[v[i].second] == true)) {
//				if (graph[v[i].first][v[i].second] == false && (group[v[i].first] == false || group[v[i].second] == false)) {
//					ans++;
//					graph[v[i].first][v[i].second] = true;
//					graph[v[i].second][v[i].first] = true;
//					group[v[i].first] = true;
//					group[v[i].second] = true;
//
//				}
//			}
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}



//단순 인접 행렬 이용해보기