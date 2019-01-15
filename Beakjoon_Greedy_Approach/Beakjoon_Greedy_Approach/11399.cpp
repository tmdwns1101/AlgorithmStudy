#include<cstdio>
#include<vector>
#include<algorithm>

#pragma warning(disable : 4996)


using namespace std;




int main() {
	int n;
	int ans = 0;
	scanf("%d", &n);

	vector<int> p(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	sort(p.begin(), p.end());
	
	for (int i = 0; i < n; i++) {
		ans += (n - i)*p[i];
	}

	printf("%d\n", ans);
	
	return 0;

}