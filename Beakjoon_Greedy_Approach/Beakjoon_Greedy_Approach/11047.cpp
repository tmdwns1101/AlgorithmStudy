#include<cstdio>
#include<vector>

#pragma warning(disable : 4996)


int cnt = 0;
int N, K;
int ary[1000001];


void Solution(int money, int index) {
	if (money == 0)
		return;

	
	int max_index;
	int rest_money = money;
	int max_money;
	

	for (int i = 0; i < index && ary[i] <= money; i++) {
			max_index = i;
	}
	max_money = ary[max_index];

	while (rest_money >= max_money) {
		rest_money -= max_money;
		cnt++;
	}
	
	Solution(rest_money, max_index);

}

int main() {
	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}

	Solution(K, N);

	printf("%d", cnt);

	return 0;


}