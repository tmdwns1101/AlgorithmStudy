#include <string>
#include <vector>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;



//이슈 : 찾은 소수가 주어진 문자열로 만들 수 있는지 확인하는 알고리즘 시간복잡도 줄이기

int IsPrimeNumber(int n) //함수 정의문
{
	int i = 0;
	int last = n / 2;   //약수가 없는 수가 소수이므로 2부터 n/2(자기자신/2)까지만 확인하면 됨
	if (n <= 1)//소수는 1보다 큰 자연수여야 함
	{
		return 0;
	}
	//(자기자신/2)보다 큰수는 약수가 될 수 없음
	for (i = 2; i <= last; i++) //i를 2부터 last까지 1씩 증가시키며 반복 수행
	{
		if ((n%i) == 0) //n을 i로 나누었을때 나머지가 0이면(즉, i는 n의 약수가 아님)
		{
			return 0; //소수가 아니므로 0반환(i가 약수이므로 n은 소수가 아님)
		}
	}
	return 1; //1~last(자기자신/2)사이에 약수가 없으므로 소수임
}


//
int solution(string numbers) {
	int answer = 0;
	//int check[10] = { 0, };
	bool check[10000000];
	memset(check, true, sizeof(check));
	vector<int> v;

	for (int i = 0; i < numbers.size(); i++) {
		v.push_back(numbers[i] - '0');
	}
	sort(v.begin(), v.end());



	/////////////////////////////////////////////// numbers로 만들 수 있는 조합 모두 구하고, 소수 인지 판별

	int max = 0;
	for (int i = 0; i < numbers.size(); i++) {
		check[numbers[i] - '0']++;
		if (max < numbers[i] - '0')
			max = numbers[i] - '0';

	}

	max = (max + 1)*pow(10, numbers.size() - 1);
	if (check[2] != 0) {
		answer++;
		//cout << '2' << '\n';
	}
	if (check[3] != 0) {
		answer++;
		//cout << '3' << '\n';
	}
	for (int i = 4; i < max; i++) {

		if (IsPrimeNumber(i)) {
			int cmp[10] = { 0, };

			string tmp = to_string(i);
			bool flag = true;
			for (int i = 0; i < tmp.size(); i++) {
				cmp[tmp[i] - '0']++;
				if (check[tmp[i] - '0'] < cmp[tmp[i] - '0']) {
					flag = false;
					break;
				}
			}

			if (flag == true) {
				answer++;
				//cout << tmp << '\n';
			}
		}
	}
	return answer;
}


int main() {
	string input;

	cin >> input;

	int ans = solution(input);

	printf("%d\n", ans);

	return 0;
}


//int solution(string numbers) {
//	bool check[7];
//	memset(check, true, sizeof(check));
//	int answer = 0;
//	
	//int max = pow(10, numbers.size());
	//for (int i = 2; i < max; i++) {
	//	
	//	if (i % 2 != 0 && i % 3 != 0) {
	//		string tmp = to_string(i);
	//		bool flag = false;
	//		int cnt = 0;
	//		for (int i = 0; i < tmp.size(); i++) {
	//			for (int j = 0; j < numbers.size(); j++) {
	//				if(tmp[i] == numbers[j] && check[j] == true){
	//					flag = true;
	//					check[j] = false;
	//					break;
	//				}
	//			}
	//			if (flag == true) {
	//				flag = false;
	//				cnt++;
	//			}
	//			else break;
	//		}
	//		if (cnt == tmp.size()) answer++;
	//		memset(check, true, sizeof(check));
	//	}
	//}
//
//
//	return answer;
//}


//int solution(string numbers) {
//	int answer = 0;
//	int check[10] = { 0, };
//
//	int max = 0;
//	for (int i = 0; i < numbers.size(); i++) {
//		check[numbers[i] - '0']++;
//		if (max < numbers[i] - '0')
//			max = numbers[i] - '0';
//
//	}
//
//	max = (max + 1)*pow(10, numbers.size() - 1);
//	if (check[2] != 0) {
//		answer++;
//		//cout << '2' << '\n';
//	}
//	if (check[3] != 0) {
//		answer++;
//		//cout << '3' << '\n';
//	}
//	for (int i = 4; i < max; i++) {
//
//		if (IsPrimeNumber(i)) {
//			int cmp[10] = { 0, };
//
//			string tmp = to_string(i);
//			bool flag = true;
//			for (int i = 0; i < tmp.size(); i++) {
//				cmp[tmp[i] - '0']++;
//				if (check[tmp[i] - '0'] < cmp[tmp[i] - '0']) {
//					flag = false;
//					break;
//				}
//			}
//
//			if (flag == true) {
//				answer++;
//				//cout << tmp << '\n';
//			}
//		}
//	}
//	return answer;
//}