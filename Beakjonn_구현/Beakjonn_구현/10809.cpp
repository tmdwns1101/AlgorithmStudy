#/*include<iostream>
#include<string>

#pragma warning(disable : 4996)

using namespace std;

bool check[27] = { false };

string input;

int main() {
	cin >> input;
	int pos[27];
	for (int i = 0; i < 27; i++) {
		pos[i] = -1;
	}

	for (int i = 0; i < input.length(); i++) {
		int index = input[i] - 'a';
		if (check[index] == false) {
			pos[index] = i;
			check[index] = true;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", pos[i]);
	}

	return 0;
}*/