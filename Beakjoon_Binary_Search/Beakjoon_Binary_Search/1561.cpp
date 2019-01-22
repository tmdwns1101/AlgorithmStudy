#include<iostream>

using namespace std;

#define MAX_TIME 60000000000;
#define MAX_M 10001

int ary[MAX_M];

int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> ary[i];
	}

	if (n <= m) {
		printf("%d\n", n);
		return 0;
	}

	long long left = 0;
	long long right = MAX_TIME;
	long long mid;
	long long begin, end;
	
	while (left <= right) {
		begin = 0;
		end = m;
		mid = (left + right) / 2;
		for (int i = 0; i < m; i++) {
			end += mid / ary[i];     //end = mid 시간 까지 탄 인원 수
		}
		begin = end;

		for (int i = 0; i < m; i++) {
			if (mid%ary[i] == 0) {
				begin -= 1;        //해당 시간의 타는 사람 시작 번호 - 1를 알 수 있음.
			}
		}
		begin += 1;

		if (n < begin) {
			right = mid -1;
		}
		else if (n > end) {
			left = mid + 1;
		}
		else {
			for (int i = 0; i < m; i++) {
				if (mid%ary[i]==0) {
					if (n == begin) {
						printf("%d\n", i + 1);
						return 0;
					}
					begin += 1;
				}
				
			}
		}
	}


	return 0;
}