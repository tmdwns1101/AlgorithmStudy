//#include<iostream>
//#include<cstring>
//#include<string>
//#include<queue>
//
//#define MAX_SIZE 10000
//
//using namespace std;
//
//
//
//int ChageNext(int num, int index, int digit) {
//	if (index == 0 && digit == 0) {
//		return -1;                             //천의자리가 0이 되어버리면 더이상 4자리 수가 안되기 때문에
//	}
//	
//	string s = to_string(num);
//	s[index] = digit + '0';
//	return stoi(s);
//}
//
//int main(){
//	bool prime[MAX_SIZE];
//
//	memset(prime, true, sizeof(prime));
//
//	for (int i = 2; i < MAX_SIZE; i++) {
//		if (prime[i] == true) {
//			for (int j = i*i; j < MAX_SIZE; j += i) {
//				prime[j] = false;                    //더 이상 소수가 될 수 없는 정수들은 false로 처리
//			}
//		}
//	}
//	int t;
//	cin >> t;
//
//	while (t--) {
//		int n, m;
//		
//		cin >> n >> m;
//		if (prime[m] == false || m<1000) {
//			printf("Impossible\n");
//			continue;
//		}
//		int d[MAX_SIZE];
//		bool c[MAX_SIZE];
//
//		memset(c, false, sizeof(c));
//		memset(d, 0, sizeof(d));
//
//		d[n] = 0;
//		c[n] = true;
//
//		queue<int> q;
//		q.push(n);
//		
//		while (!q.empty() || c[m] != true) {
//			int now = q.front();
//			q.pop();
//
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j <= 9; j++) {
//					int next = ChageNext(now, i, j);
//
//					if (next != -1) {
//						if (prime[next] == true && c[next] == false) {
//							q.push(next);
//							d[next] = d[now] + 1;
//							c[next] = true;
//						}
//					}
//				}
//			}
//		}
//
//		printf("%d\n", d[m]);
//	}
//
//	return 0;
//}