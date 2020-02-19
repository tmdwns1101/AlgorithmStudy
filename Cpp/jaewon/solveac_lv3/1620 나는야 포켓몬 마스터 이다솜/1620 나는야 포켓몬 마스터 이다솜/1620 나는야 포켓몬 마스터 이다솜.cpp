/*
오박사 : 
네가 현재 가지고 있는 포켓몬 도감에서 포켓몬의 이름을 보면 포켓몬의 번호를 말하거나, 
포켓몬의 번호를 보면 포켓몬의 이름을 말하는 연습을 하도록 하여라

입력
첫째 줄에는 도감에 수록되어 있는 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M이 주어져. 
N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수

둘째 줄부터 N개의 줄에 포켓몬의 번호가 1번인 포켓몬부터 N번에 해당하는 포켓몬까지 한 줄에 하나씩 입력으로 들어와. 
포켓몬의 이름은 모두 영어로만 이루어져있고 첫 글자만 대문자이고, 나머지 문자는 소문자로만 이루어져 있어. 포켓몬 이름의 최대 길이는 20이야. 
그 다음 줄부터 총 M개의 줄에 내가 맞춰야하는 문제가 입력으로 들어와. 
문제가 알파벳으로만 들어오면 포켓몬 번호를 말해야 하고, 숫자로만 들어오면, 포켓몬 번호에 해당하는 문자를 출력해야해. 
입력으로 들어오는 숫자는 반드시 1보다 크거나 같고, N보다 작거나 같고, 입력으로 들어오는 문자는 반드시 도감에 있는 포켓몬의 이름만 주어져.

출력
첫째 줄부터 차례대로 M개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어!!!. 
입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을, 문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;



int n, m;
map<string, int> pokemonName; // 이름으로 검색할 때
string pokemonNum[100001]; // 번호로 검색할 때
string question;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
		cin >> pokemonNum[i];
		pokemonName.insert(make_pair(pokemonNum[i], i));
	}
	for (int i = 0; i < m; i++) {
		cin >> question;
		if (question.at(0) > '0' && question.at(0) <= '9') {
			cout << pokemonNum[stoi(question)] << '\n';
		}
		else {
			cout << pokemonName[question] << '\n';
		}
	}
}
