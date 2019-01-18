#include<iostream>
#include<algorithm>
#include<vector>

#pragma warning(disable : 4996)

using namespace std;


int main() {
	int n, m, k;
	
	scanf("%d %d %d", &n, &m, &k);

	if (n >= m + k - 1 && n <= m*k) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) v[i] = i+1;
		int temp;
		int idx = 0;
		
		for (int i = 1; i <= m; i++) {
			temp = min(idx + k, n - m + i);
			reverse(v.begin() + idx, v.begin() + temp);
			idx = temp;
		}

		for (int i = 0; i < n; i++) printf("%d ", v[i]);

	}
	else {
		printf("-1\n");
	}

	return 0;
}

