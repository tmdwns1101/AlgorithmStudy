#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= 2 * n; j++) {
			if (i <= n) {
				if (j <= n && j <= i) cout << "*";
				else if (j <= n) cout << " ";
				else if (j > n && j <= 2 * n - i) cout << " ";
				else cout << "*";
			}
			else {
				if (j < n && j <= 2 * n - i) cout << "*";
				else if (j <= n)  cout << " ";
				else if (j > n && j < i + 1) cout << " ";
				else cout << "*";
			}
		}

		cout << "\n";
	}

	return 0;
}
