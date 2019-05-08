#include<iostream>
#include<vector>
#include<algorithm>
#pragma warning(disable : 4996)

using namespace std;


int ans = 0;
vector<int> ary;
int target;
int position;
bool oneFlag = false;

void Solution(int st, int ed) {
	if (st > ed || st > position || ed < position) {
		return;
	}
	int size = ed - st + 1;

	if (size % 2 != 0) {
		
		vector<int> temp;
		for (int i = st; i <= ed; i++) {
			temp.push_back(ary[i]);
		}
		sort(temp.begin(), temp.end());
		int mid = size / 2;
		if (temp[mid] == target) {
			if (size == 1) {
				if (oneFlag == false) {
					oneFlag = true;
					ans++;
				}
			}
			else {
				ans++;
			}
		}
	}

	Solution(st + 1, ed);
	Solution(st, ed - 1);
}

int main() {
	int n;

	scanf("%d %d", &n,&target);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		ary.push_back(num);
		if (num == target) position = i;
	}

	Solution(0, ary.size() - 1);

	printf("%d\n", ans);

	return 0;
}

//이슈 : 이미 발견한 부분수열을 계산에 포함이 되어버림