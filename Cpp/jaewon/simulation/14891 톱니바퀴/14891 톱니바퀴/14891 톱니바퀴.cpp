/* 
14891 톱니바퀴.cpp 
첫째 줄에 1번 톱니바퀴의 상태, 둘째 줄에 2번 톱니바퀴의 상태, 셋째 줄에 3번 톱니바퀴의 상태, 넷째 줄에 4번 톱니바퀴의 상태가 주어진다.
상태는 8개의 정수로 이루어져 있고, 12시방향부터 시계방향 순서대로 주어진다.N극은 0, S극은 1로 나타나있다.

다섯째 줄에는 회전 횟수 K(1 ≤ K ≤ 100)가 주어진다.다음 K개 줄에는 회전시킨 방법이 순서대로 주어진다.
각 방법은 두 개의 정수로 이루어져 있고, 첫 번째 정수는 회전시킨 톱니바퀴의 번호, 두 번째 정수는 방향이다.
방향이 1인 경우는 시계 방향이고, -1인 경우는 반시계 방향이다.

출력
총 K번 회전시킨 이후에 네 톱니바퀴의 점수의 합을 출력한다.점수란 다음과 같이 계산한다.

1번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 1점
2번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 2점
3번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 4점
4번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 8점
*/

#include <iostream>
using namespace std;

struct Order {
	int num;
	int dir;
};
Order order;
int wheel[4][8]; // [4][8] 배열 0으로 초기화
int K;

void myRotate(int *wheel, int dir) {
	int num;
	if (dir == 1) {
		rotate(wheel, wheel + 1, wheel + 8);
	}
	if (dir == -1) {
		reverse(wheel, wheel + 8);
		rotate(wheel, wheel + 1, wheel + 8);
		reverse(wheel, wheel + 8);
	}
}

bool should_rotate_right(int *wheel1, int *wheel2) {
	if (wheel1[2] == wheel2[6])
		return false;
	if (wheel1[2] != wheel2[6])
		return true;
}
bool should_rotate_left(int* wheel1, int* wheel2) {
	if (wheel1[6] == wheel2[2])
		return false;
	if (wheel1[6] != wheel2[2])
		return true;
}


int main()
{
	for (int i = 0; i < 4; i++) {
		string num;
		cin >> num;
		for (int j = 0; j < 8; j++) {
			wheel[i][j] = (int)num.at(j) - '0';
		}
	}

	cin >> K;

	while (K--) {
		cin >> order.num >> order.dir;
		bool should_rotate[4] = { false };
		int rotate_dir[4] = { 1 };
		int num_temp = order.num - 1;
		rotate_dir[num_temp] = order.dir;

		// check rotate left
		while (num_temp != 0) {
			should_rotate[num_temp - 1] = should_rotate_left(wheel[num_temp], wheel[num_temp - 1]);
			rotate_dir[num_temp - 1] = rotate_dir[num_temp] * -1;
			if (!should_rotate[num_temp - 1])
				break;
			num_temp--;
		}

		num_temp = order.num;

		// check rotate right
		while (num_temp != 3) {
			should_rotate[num_temp + 1] = should_rotate_right(wheel[num_temp], wheel[num_temp + 1]);
			rotate_dir[num_temp + 1] = rotate_dir[num_temp] * -1;
			if (!should_rotate[num_temp + 1])
				break;
			num_temp++;
		}

		// rotate
		for (int i = 0; i < 4; i++) {
			if (should_rotate[i]) {
				myRotate(wheel[i], rotate_dir[i]);
			}
		}
	}

	// result
	int sum = 0;
	int multi = 1;
	for (int i = 0; i < 4; i++) {
		cout << "wheel[" << i << "][0] : " << wheel[i][0] << endl;
		sum += (wheel[i][0] * multi);
		cout << "sum : " << sum << " multi : " << multi << endl;
		multi *= 2;
	}
	cout << sum << endl;
	return 0;
}
