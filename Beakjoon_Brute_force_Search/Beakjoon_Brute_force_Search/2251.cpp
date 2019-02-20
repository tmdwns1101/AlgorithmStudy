//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//
//bool ans[201];            //a 물통이 비어있을 때 물의 양
//bool check[201][201];     //a b 물통의 물의 양 
//
//int main() {
//	int a, b, c;
//
//
//	cin >> a >> b >> c;
//	int sum = c;
//	
//	memset(ans, false, sizeof(ans));
//	memset(check, false, sizeof(check));
//
//	ans[c] = true;
//	queue<pair<int, int>> q;
//	q.push(make_pair(0, 0));
//	check[0][0] = true;
//
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		int z = sum - x - y;
//		q.pop();
//
//		int nx, ny, nz;         // 현재 a b c 의 물양
//		nx = x;
//		ny = y;
//		nz = z;
//
//		//x -> y
//		ny += nx;
//		nx = 0;
//		if (ny > b) {
//			nx = ny - b;
//			ny = b;
//			
//		}
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//		nx = x;
//		ny = y;
//		nz = z;
//
//		//y - > x
//
//		nx += ny;
//		ny = 0;
//		if (nx > a) {
//			ny = nx -a;
//			nx = a;
//		}
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//		nx = x;
//		ny = y;
//		nz = z;
//
//		// z -> x
//		nx += nz;
//		nz = 0;
//		if (nx > a) {
//			nz = nx - a;
//			nx = a;
//		}
//
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//		nx = x;
//		ny = y;
//		nz = z;
//
//		//z - > y
//		
//		ny += nz;
//		nz = 0;
//		if (ny > b) {
//			nz = ny - b;
//			ny = b;
//		}
//
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//		nx = x;
//		ny = y;
//		nz = z;
//
//		//x -> z
//
//		nz += nx;
//		nx = 0;
//		if (nz > c) {
//			nx = nz - c;
//			nz = c;
//		}
//
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//		nx = x;
//		ny = y;
//		nz = z;
//
//		//y -> z
//
//		nz += ny;
//		ny = 0;
//		if (nz > c) {
//			ny = nz - c;
//			nz = c;
//		}
//
//		if (!check[nx][ny]) {
//			check[nx][ny] = true;
//			q.push(make_pair(nx, ny));
//			if (nx == 0) {
//				ans[nz] = true;
//			}
//		}
//
//
//	}
//
//	for (int i = 0; i < 201; i++) {
//		if (ans[i] == true) {
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n");
//
//	return 0;
//
//}