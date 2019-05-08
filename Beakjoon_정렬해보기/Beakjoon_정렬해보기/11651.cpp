/*
#include<iostream>
#include<vector>
#include<algorithm>

#pragma warning(disable : 4996)
using namespace std;


bool Rule(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second != p2.second) {
		return p1.second < p2.second ? true : false;
	}
	else {
		return p1.first < p2.first ? true : false;
	}
}


int main() {
	int n;

	cin >> n;

	vector<pair<int, int>> v(n);
	int xpos;
	int ypos;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &xpos, &ypos);
		v[i] = make_pair(xpos, ypos);
	}

	sort(v.begin(), v.end(), Rule);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}

	return 0;
}
*/