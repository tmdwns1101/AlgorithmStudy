/*#include<iostream>
#include<string>

using namespace std;


int main() {
	char alpha[26];
	string key;
	string input;
	int k = 97;
	for (int i = 0; i < 26; i++) {
		alpha[i] = k;
		k++;
	}

	getline(cin, input);
	cin >> key;

	string ans = "";

	int j = 0;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != ' ') {
			int idx = (input[i] - 'a') - (key[j] - 'a') - 1;
			if (idx >= 0) {
				ans += alpha[idx];
			}
			else {
				ans += alpha[26 + idx];
			}
		}
		else {
			ans += ' ';
		}
		j++;
		if (j >= key.length()) j = 0;
		
	}

	cout << ans << '\n';
	return 0;

}*/