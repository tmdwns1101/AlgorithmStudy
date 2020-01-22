/*
 1. N/2 만큼 한팀이므로 순열(permutation)이 아니라 조합(combination)을 써야한다.
 2. algorithm에는 next_permutation만 있고 조합은 없다.
 3. next_permutation으로 combination을 만들 수 있나?
 4. 1) nCr에 대해, 전체길이가 n, 1의 개수가 r, 나머지가 0으로 채워진 보조 수열을 생성한다.
	2) 보조 수열에 대한 순열을 모두 구한다. 이때 중복을 제외한다.
	3) 보조 수열의 결과 순열을 모두 조사하여, 값이 1인 위치(인덱스)를 찾아 원래 자료구조에서 추출한다.
	https://whiteherv.tistory.com/2
	팀 나누기 완료!
5. for문을 통해 팀당 2명씩 골라서 능력치를 합해서 비교하자
*/


#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

	int n, stat[21][21];
	int start_sum, link_sum;
	int start_first, start_second, link_first, link_second;
	int ans = 10000000;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> stat[i][j];
		}
	}

	// 순열을 저장할 리스트 v를 벡터로 생성.
	vector<int> v;
	for (int i = 0; i < n / 2; i++) v.push_back(0);
	for (int i = 0; i < n / 2; i++) v.push_back(1);
	do {
		
		vector<int> start, link;
		for (int i = 0; i < (int)v.size(); i++) {
			// 0일때 스타트팀에 넣어줍니다.
			if (v[i] == 0) {
				start.push_back(i + 1);
			}
			// 1일때 링크팀에 넣어줍니다.
			else {
				link.push_back(i + 1);
			}
		}

		start_sum = 0;
		link_sum = 0;

		for (int i = 0; i < n / 2; i++) {
			for (int j = i + 1; j < n / 2; j++) {
				if (i == j)continue;

				// 스타트팀 2명 고르기
				start_first = start[i];
				start_second = start[j];

				// 스타트팀 점수 계산
				start_sum += stat[start_first][start_second] + stat[start_second][start_first];

				// 링크팀 2명 고르기
				link_first = link[i];
				link_second = link[j];

				// 링크팀 점수 계산
				link_sum += stat[link_first][link_second] + stat[link_second][link_first];
			}
		}

		// 최소값을 갱신
		ans = min(ans, abs(start_sum - link_sum));

	} while (next_permutation(v.begin(), v.end()));

	cout << ans;
}