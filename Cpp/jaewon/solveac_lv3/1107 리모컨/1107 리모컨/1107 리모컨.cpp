/*
문제
수빈이는 TV를 보고 있다. 
수빈이는 채널을 돌리려고 했지만, 버튼을 너무 세게 누르는 바람에, 일부 숫자 버튼이 고장났다.

리모컨에는 버튼이 0부터 9까지 숫자, +와 -가 있다. 
+를 누르면 현재 보고있는 채널에서 +1된 채널로 이동하고, -를 누르면 -1된 채널로 이동한다. 
채널 0에서 -를 누른 경우에는 채널이 변하지 않고, 채널은 무한대 만큼 있다.

수빈이가 지금 이동하려고 하는 채널은 N이다. 어떤 버튼이 고장났는지 주어졌을 때, 
채널 N으로 이동하기 위해서 버튼을 최소 몇 번 눌러야하는지 구하는 프로그램을 작성하시오.

수빈이가 지금 보고 있는 채널은 100번이다.

입력
첫째 줄에 수빈이가 이동하려고 하는 채널 N (0 ≤ N ≤ 500,000)이 주어진다. 
둘째 줄에는 고장난 버튼의 개수 M (0 ≤ M ≤ 10)이 주어진다. 
고장난 버튼이 있는 경우에는 셋째 줄에는 고장난 버튼이 주어지며, 같은 버튼이 여러 번 주어지는 경우는 없다.

출력
첫째 줄에 채널 N으로 이동하기 위해 버튼을 최소 몇 번 눌러야 하는지를 출력한다.
*/

#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 1000000 + 1;
int n, m;
vector<int> broken;


bool canPush(int num) {
	if (num == 0) {
		if (find(broken.begin(), broken.end(), 0) == broken.end()) // find : broken에서 첫번째 0의 iter를 반환
			return true;
		else
			return false;
	}
	
	while (num) {
		if (find(broken.begin(), broken.end(), num % 10) != broken.end())
			return false;
		num /= 10;
	}
	return true;
}
int length(int num)
{
	if (num == 0)
		return 1;

	int result = 0;

	while (num)	{
		num /= 10;
		result++;
	}

	return result;

}
int bruteForce() {
	int result = 10000000;
	int closeNum;

	for (int i = 0; i < MAX; i++) {
		if (canPush(i)) {
			int push = abs(n - i);
			if (result > push) {
				result = push;
				closeNum = i;
			}
		}
	}
	return result + length(closeNum);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int error;
		cin >> error;
		broken.push_back(error);
	}
	cout << min(abs(n - 100), bruteForce()) << '\n';
}

