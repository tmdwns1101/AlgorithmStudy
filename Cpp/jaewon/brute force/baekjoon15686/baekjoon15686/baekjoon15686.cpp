/*
	완전탐색
	치킨거리 구하기 백준 15686
	1. 하나의 경우만 봤을 때 하나의 집에서 임의의 치킨집 까지의 거리를 구하는 것.
	2. 반복을 통해 치킨집을 바꿔가며 집에서 가장 가까운 치킨거리를 구함.
	3. 얼마나 반복해야 할까? : 개점한 치킨집을 다 확인해 볼만큼
	
	반복 함수 : next_permutaion();
	현재 나와 있는 수열에서 인자로 넘어간 범위에 해당하는 다음 순열을 구하고 true를 반환한다.
	다음 순열이 없다면(다음에 나온 순열이 순서상 이전 순열보다 작다면) false를 반환.
	순열을 구하고 싶은 1-2-3-4의 배열이 있다고 가정을 하면 next_permutation의 함수를 사용하면 
	배열의 값들이 다음 순열인1-2-4-3로 바뀌고 함수는 true를 반환.
	1 2 3 4
	1 2 4 3
	1 3 2 4

	...

	4 2 3 1
	4 3 1 2
	4 3 2 1
*/

#include <iostream>
#include <vector> // 좌표 저장
#include <math.h> // abs(),min()
#include <algorithm> // next_permutation()
using namespace std;

int main() {

	int N, M;
	int ans = 0;
	vector<pair<int, int>> house; //집 좌표
	vector<pair<int, int>> chicken; //치킨집 좌표
	vector<int> open; //치킨 집 폐업 유무 0 : 폐업, 1 : 개점
	int numOfHouse = 0; //집 개수
	int numOfChicken = 0; //치킨집 개수
	int city_info; //도시 정보

	cin >> N >> M;
	
	// 도시정보 받아서 house, chicken 분류
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> city_info;
			if (city_info == 1) {
				house.push_back(make_pair(i, j));
			}
			if (city_info == 2) {
				chicken.push_back(make_pair(i, j));
				open.push_back(0); //모두 폐업으로 초기화
			}
		}
	}

	numOfHouse = (int)house.size();
	numOfChicken = (int)chicken.size();

	// M개의 치킨집만 개점
	for (int i = 0; i < M; i++) {
		open[numOfChicken - i - 1] = 1;
	}

	do {
		vector<int> dist(numOfHouse, 101); //치킨 거리
		// 최대거리가 100이므로 101로 초기화

		// i번째 집의 치킨 거리 구하기
		for (int i = 0; i < numOfHouse; i++) {
			int r1 = house[i].first;
			int c1 = house[i].second;
			for (int j = 0; j < numOfChicken; j++) {
				if (open[j] == 0)
					continue;
				int r2 = chicken[j].first;
				int c2 = chicken[j].second;
				dist[i] = min(dist[i], abs(r1 - r2) + abs(c1 - c2));
			}

		}

		int sum = 0;
		for (int i = 0; i < numOfHouse; i++) {
			sum += dist[i];
		}

		if (ans == 0) {
			ans = sum;
		}
		else {
			ans = min(ans, sum);
		}

	} while (next_permutation(open.begin(), open.end()));

	cout << ans << endl;

	return 0;
}