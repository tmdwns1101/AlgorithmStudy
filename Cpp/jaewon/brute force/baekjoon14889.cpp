/*
 1. N/2 ��ŭ �����̹Ƿ� ����(permutation)�� �ƴ϶� ����(combination)�� ����Ѵ�.
 2. algorithm���� next_permutation�� �ְ� ������ ����.
 3. next_permutation���� combination�� ���� �� �ֳ�?
 4. 1) nCr�� ����, ��ü���̰� n, 1�� ������ r, �������� 0���� ä���� ���� ������ �����Ѵ�.
	2) ���� ������ ���� ������ ��� ���Ѵ�. �̶� �ߺ��� �����Ѵ�.
	3) ���� ������ ��� ������ ��� �����Ͽ�, ���� 1�� ��ġ(�ε���)�� ã�� ���� �ڷᱸ������ �����Ѵ�.
	https://whiteherv.tistory.com/2
	�� ������ �Ϸ�!
5. for���� ���� ���� 2�� ��� �ɷ�ġ�� ���ؼ� ������
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

	// ������ ������ ����Ʈ v�� ���ͷ� ����.
	vector<int> v;
	for (int i = 0; i < n / 2; i++) v.push_back(0);
	for (int i = 0; i < n / 2; i++) v.push_back(1);
	do {
		
		vector<int> start, link;
		for (int i = 0; i < (int)v.size(); i++) {
			// 0�϶� ��ŸƮ���� �־��ݴϴ�.
			if (v[i] == 0) {
				start.push_back(i + 1);
			}
			// 1�϶� ��ũ���� �־��ݴϴ�.
			else {
				link.push_back(i + 1);
			}
		}

		start_sum = 0;
		link_sum = 0;

		for (int i = 0; i < n / 2; i++) {
			for (int j = i + 1; j < n / 2; j++) {
				if (i == j)continue;

				// ��ŸƮ�� 2�� ����
				start_first = start[i];
				start_second = start[j];

				// ��ŸƮ�� ���� ���
				start_sum += stat[start_first][start_second] + stat[start_second][start_first];

				// ��ũ�� 2�� ����
				link_first = link[i];
				link_second = link[j];

				// ��ũ�� ���� ���
				link_sum += stat[link_first][link_second] + stat[link_second][link_first];
			}
		}

		// �ּҰ��� ����
		ans = min(ans, abs(start_sum - link_sum));

	} while (next_permutation(v.begin(), v.end()));

	cout << ans;
}