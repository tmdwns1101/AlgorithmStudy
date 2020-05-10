// 1062 가르침.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
/*
문제
남극에 사는 김지민 선생님은 학생들이 되도록이면 많은 단어를 읽을 수 있도록 하려고 한다. 
그러나 지구온난화로 인해 얼음이 녹아서 곧 학교가 무너지기 때문에, 김지민은 K개의 글자를 가르칠 시간 밖에 없다. 
김지민이 가르치고 난 후에는, 학생들은 그 K개의 글자로만 이루어진 단어만을 읽을 수 있다. 
김지민은 어떤 K개의 글자를 가르쳐야 학생들이 읽을 수 있는 단어의 개수가 최대가 되는지 고민에 빠졌다.

남극언어의 모든 단어는 "anta"로 시작되고, "tica"로 끝난다. 남극언어에 단어는 N개 밖에 없다고 가정한다. 학생들이 읽을 수 있는 단어의 최댓값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 개수 N과 K가 주어진다. N은 50보다 작거나 같은 자연수이고, K는 26보다 작거나 같은 자연수 또는 0이다. 
둘째 줄부터 N개의 줄에 남극 언어의 단어가 주어진다. 
단어는 영어 소문자로만 이루어져 있고, 길이가 8보다 크거나 같고, 15보다 작거나 같다. 모든 단어는 중복되지 않는다.

출력
첫째 줄에 김지민이 K개의 글자를 가르칠 때, 학생들이 읽을 수 있는 단어 개수의 최댓값을 출력한다.
*/

// 26개 중에 a n t i c 은 빼고 21개만 돌린다.b d e f g h j k l m o p q r s u v w x y z

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, ans;
string word[50];
bool visited[26];

void dfs(int alphabet, int cnt) {
	// k 개 만큼 배웠다면 
	if (cnt == K) {

		int temp = 0;
		// 익힐 수 있는가
		for (int i = 0; i < N; i++) {
			bool flag = true;
			for (int j = 0; j < word[i].length(); j++) {
				if (!visited[word[i].at(j) - 'a']) {
					flag = false;
					break;
				}
			}

			if (flag) temp++;
		}
		ans = max(ans, temp);
		return;
	}

	// k 개 배우기
	for (int i = alphabet; i < 26; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i, cnt + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> K;

    //ANTA, TICA 무조건 포함

    if (K < 5)

    {

        cout << 0 << "\n";

        return 0;

    }

    //전부 익힐 수 있다

    else if (K == 26)

    {

        cout << N << "\n";

        return 0;

    }



    K -= 5;

    for (int i = 0; i < N; i++)

    {

        cin >> word[i];



        //anta

        word[i] = word[i].substr(4, word[i].length());

        //tica

        for (int j = 0; j < 4; j++)

            word[i].pop_back();

    }



    //a, c, i, n, t 무조건 포함

    visited['a' - 'a'] = true;

    visited['c' - 'a'] = true;

    visited['i' - 'a'] = true;

    visited['n' - 'a'] = true;

    visited['t' - 'a'] = true;

    dfs(0, 0);

    cout << ans << endl;

    return 0;
}
