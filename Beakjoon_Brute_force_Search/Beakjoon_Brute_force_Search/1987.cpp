//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//
//using namespace std;
//
////int go(vector<string> &board, bool &check, int x, int y) 함수
////매개변수
////board : 보드판에 적혀 있는 알파벳  , row 길이는 board.size() =>문자열 갯수  col 길이는 board[0].size() => 문자열 길이
////check : 지나온 알파벳 체크 check[0~23] 대문자 알파벳 갯수 만큼 길이를 가짐 ex) check['B' - 'A'] == check[1] 
////x ,y : 현재 보드에서 좌표
////함수 설명
////보드에서 지나온 알파벳을 체크하며 지나온 경로 수를 리턴
//
//
////dx[0] dy[0] : 오른쪽으로 한번 이동
////dx[1] dy[1] : 왼쪽으로 한번 이동
////dx[2] dy[2] : 위로 한번 이동
////dx[3] dy[3]  : 아래로 한번 이동
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int go(vector<string> &board,vector<bool> &check, int x, int y) {
//	int ans = 0;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
//			if (check[board[nx][ny] - 'A'] == false) {
//				check[board[nx][ny] - 'A'] = true;
//				int next = go(board, check, nx, ny);
//				if (ans < next) ans = next;
//				check[board[nx][ny] - 'A'] = false;
//			}
//		}
//	}
//	return ans + 1; //첫 번째 칸은 무조건 포함
//}
//
//int main() {
//	int R, C;
//	
//	cin >> R >> C;
//	vector<string> board(R);
//	
//	for (int i = 0; i < R; i++) {
//		cin >> board[i];
//	}
//
//	vector<bool> check;
//	
//	for (int i = 0; i < 24; i++) {
//		check.push_back(false);
//	}
//	check[board[0][0] - 'A'] = true;
//	int result = go(board, check, 0, 0);
//
//	cout << result << '\n';
//
//	return 0;
//}