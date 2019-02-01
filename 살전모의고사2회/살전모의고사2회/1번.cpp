#include <string>
#include <iostream>
#include <vector>
#include<algorithm>
#include<cstring>
using namespace std;


bool solution(vector<int> arrA, vector<int> arrB) {
	bool ans = false;
	if (arrA.size() != arrB.size()) {
		return ans;
	}

	for (int i = 0; i < arrA.size(); i++) {
		if (arrA == arrB) {
			ans = true;
			return ans;
		}
		rotate(arrA.begin(), arrA.begin() + 1, arrA.end());
	}

	return ans;
}


int main() {
	vector<int> arrA = { 8,7,9,10 };
	vector<int> arrB = { 10,8,7,9 };

	bool ans = solution(arrA, arrB);

	if (ans == true)
		cout << "OK" << '\n';
	else
		cout << "NO" << '\n';

	return 0;
}



/*version 1 */
//
//#define max  INT16_MAX
//int pos[max];
//
//bool solution(vector<int> arrA, vector<int> arrB) {
//	bool answer = true;
//	if (arrA.size() != arrB.size()) {
//		answer = false;
//		return answer;
//	}
//	int size = arrA.size();
//	vector<int> tempA = arrA;
//	vector<int> tempB = arrB;
//	sort(tempA.begin(), tempA.end());
//	sort(tempB.begin(), tempB.end());
//
//	for (int i = 0; i<size; i++) {
//		if (tempA[i] != tempB[i])
//			return false;
//	}
//
//
//	for (int i = 0; i<size; i++) {
//		pos[arrB[i]] = i;
//	}
//	int ary[100];
//	int shiftCnt = pos[arrA[0]];
//	int temp = arrA[size - 1], temp1;
//    for (int i = 0; i < size; i++) {
//		temp1 = arrA[i];
//		arrA[i] = temp;
//		temp = temp1;
//	}
//
//	for (int i = 0; i<size; i++) {
//		if (arrA[i] != arrB[i])
//			return false;
//	}
//
//
//	return answer;
//}
//
