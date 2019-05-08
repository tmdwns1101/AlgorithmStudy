/*#include<iostream>
#include<string>

using namespace std;


int main() {
	int weight[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

	string number;

	cin >> number;

	int ans = 0;
	for (int i = 0; i < number.length(); i++) {
		ans += weight[number[i] - 'A'];
	}

	printf("%d\n", ans);

	return 0;
}*/