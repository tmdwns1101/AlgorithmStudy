

/*해결 못 한 문제*/

/*#include<iostream>
#include<string>
#include<cstring>
#include<vector>

#pragma warning(disable : 4996)
using namespace std;

int main() {
	string answer;

	int n;

	scanf("%d", &n);
	cin.ignore(2500, '\n');
	
	getline(cin, answer);
	//getline(cin, input);
	cin.clear();
	
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int sum = 0;
	bool check[2500];
	int pos[2500];
	memset(check, false, sizeof(check));
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (check[i] == false) {
				int aIdx = answer.find(s[i]);
				check[i] = true;
				pos[i] = aIdx;
			}
			if (check[j] == false) {
				int bIdx = answer.find(s[j]);
				check[j] = true;
				pos[j] = bIdx;
			}
			
			if (pos[i] < pos[j]) sum++;
		}
	}

	printf("%d/%d\n", sum, (n*(n - 1) / 2));

	return 0;
}*/