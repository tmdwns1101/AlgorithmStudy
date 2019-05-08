#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string phone_number) {
	string answer = "";

	int end_idx = phone_number.length() - 1;

	int star_idx = end_idx - 4;

	string tmp = phone_number.substr(star_idx + 1, 4);
	string star = "";

	for (int i = 0; i<=star_idx; i++) {
		star += "*";
	}
	answer = star + tmp;
	return answer;
}

