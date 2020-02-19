/*
문제
김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다. 
이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과, N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다. 
이름은 띄어쓰기 없이 영어 소문자로만 이루어지며, 그 길이는 20 이하이다. 
N, M은 500,000 이하의 자연수이다.

출력
듣보잡의 수와 그 명단을 사전순으로 출력한다.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int n, m;
map <string, bool> mp; // 듣지 못한것에서 보지 못한것들을 문자열로 검색하기 위함.
vector <string> ans;
string strTemp;

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> strTemp;
		mp.insert(make_pair(strTemp, true)); // 듣지 못한것들을 true로 저장
	}

	for (int i = 0; i < m; i++) {
		cin >> strTemp;
		if (mp[strTemp]) { // 듣지 못한것들에 있다면
			ans.push_back(strTemp); // 정답으로 빼기
		}
	}

	sort(ans.begin(),ans.end()); // 사전순으로 정리
	
	cout << ans.size() << '\n';
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
}

