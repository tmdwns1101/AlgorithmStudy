// 3671.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
/*
첫째 줄에 테스트 케이스의 개수 c가 주어진다. 
(1 ≤ c ≤ 200) 각 테스트 케이스는 한 줄로 이루어져 있고, 종이조각에 쓰여 있는 수가 공백없이 주어진다. 
종이조각의 수는 적어도 1개, 많아야 7개이다.

출력
각 테스트 케이스에 대해 종이조각을 적절히 배치해서 만들 수 있는 서로 다른 소수의 개수를 출력한다. 
이때, 모든 종이 조각을 사용하지 않아도 된다. (7과 1이 있을 때, 만들 수 있는 소수는 7, 17, 71이다) 
종이 조각을 적절히 배치해서 만든 숫자가 0으로 시작할 때, 앞에있는 0을 지운 수가 같으면 같은 숫자이다.
*/

/*
이 문제에서 해결해야할 부분
1. 소수 찾기
2. do - while 반복
3. 소수의 개수 구하기
*/

/*
1. 소수 찾기 - 에라토스테네스의 채
// 에라토스테네스의 체 - O(NloglogN)
* 위 문제에서10000000*log(log(10000000)) := 8450980

#define SIZE 100
int arr[SIZE+1];

int main()
{
	int i,j;

	// 배열 초기화
	for(i=2;i<=SIZE;i++){
		arr[i] = i;
	}

	for (i=2;i*i<=SIZE;i++){
		// 이미 체크된 수의 배수들은 합성수임이 자명
		if(arr[i] == 0)
			continue;
		// i를 제외한 i의 배수들을 0으로 체크
		for (j=i+i;j<=SIZE;j+=i){
			arr[j] = 0;
		}
	}
*/

/*
2. do - while 반복
test case가 7자리씩 들어오므로 string으로 받아서 한자리씩 next_permutation()실행
std::vector, std::deque, std::set, std::string 정도는 next_permutation() 실행 가능
*/

/*
3. 소수 개수파악
substr을 통해 7자리의 수를 각 자리마다 나올 수 있는 수를 표현
2중 for문을 통해 반복
check[]를 통해 확인한 수인지 체크하고 동시에 소수이면 ans++.
ans++할 때 그 수의 check를 true로 바꿈
*/

/*
사용 함수
std::fill_n(index, len, number)
index부터 len만큼 number로 배열을 초기화.
fill_n(check, SIZE, 0);

string::substr(index, len);
string의 index부터 len만큼 잘라서 반환.
int n = stoi(test_case.substr(i, j));
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define numSize 10000000

void eratostenes(bool *prime);
int solve(string &test_case);

int c;
string test_case;
bool prime[numSize], check[numSize]; // prime[]이 false이면 소수이다.


int main()
{
	eratostenes(prime);

	cin >> c;
	while(c--) {
		cin >> test_case;
		cout << solve(test_case) << endl;
	}
	return 0;
}

void eratostenes(bool *prime) {
	//------ 에라토스테네스의 채 ---------
	prime[0] = prime[1] = true;
	for (int i = 2; i*i < numSize; i++) {
		if (!prime[i])
			continue;
		for (int j = 2 * i; j < numSize; j += i)
			prime[j] = true;
	}
	//------------------------------------
}

int solve(string &test_case) {
	int ans = 0;
	int size = test_case.size();
	sort(test_case.begin(), test_case.end());

	do {
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j <= size; j++)
			{
				int n = stoi(test_case.substr(i, j));
				if (!check[n] && !prime[n]) {
					check[n] = true;
					ans++;
				}
			}
		}
	} while (next_permutation(test_case.begin(), test_case.end()));

	fill_n(check, numSize, 0);
	return ans;
}