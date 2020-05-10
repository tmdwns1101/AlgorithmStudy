/*
입력
첫째 줄에 저장된 사이트 주소의 수 N(1 ≤ N ≤ 100,000)과 비밀번호를 찾으려는 사이트 주소의 수 M(1 ≤ M ≤ 100,000)이 주어진다.

두번째 줄부터 N개의 줄에 걸쳐 각 줄에 사이트 주소와 비밀번호가 공백으로 구분되어 주어진다. 
사이트 주소는 알파벳 소문자, 알파벳 대문자, 대시('-'), 마침표('.')로 이루어져 있고, 중복되지 않는다. 
비밀번호는 알파벳 대문자로만 이루어져 있다. 모두 길이는 최대 20자이다.

N+2번째 줄부터 M개의 줄에 걸쳐 비밀번호를 찾으려는 사이트 주소가 한줄에 하나씩 입력된다. 이때, 반드시 이미 저장된 사이트 주소가 입력된다.

출력
첫 번째 줄부터 M개의 줄에 걸쳐 비밀번호를 찾으려는 사이트 주소의 비밀번호를 차례대로 각 줄에 하나씩 출력한다.
*/

#include <iostream>
#include <map>
using namespace std;

int n, m;
string str1, str2, str3;
map<string, string> pw;
map<string, string>::iterator iter;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	
	// map의 호출방법 1. iterator 사용
	/*
	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2;
		pw.insert(pair<string, string>(str1, str2));
	}

	for (int i = 0; i < m; i++) {
		cin >> str3;
		iter = pw.find(str3);
		cout << (*iter).second << endl;
	}
	*/

	// map의 호출방법 2.
	while (n--) {
		cin >> str1 >> str2;
		pw.insert({ str1,str2 });
	}
	while (m--) {
		cin >> str3;
		cout << pw.find(str3)->second << '\n';
	}
}