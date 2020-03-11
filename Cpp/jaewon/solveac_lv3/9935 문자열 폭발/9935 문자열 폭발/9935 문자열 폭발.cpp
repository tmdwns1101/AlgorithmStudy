/*
문제
상근이는 문자열에 폭발 문자열을 심어 놓았다. 
폭발 문자열이 폭발하면 그 문자는 문자열에서 사라지며, 남은 문자열은 합쳐지게 된다.

폭발은 다음과 같은 과정으로 진행된다.

문자열이 폭발 문자열을 포함하고 있는 경우에, 모든 폭발 문자열이 폭발하게 된다. 
남은 문자열을 순서대로 이어 붙여 새로운 문자열을 만든다.
새로 생긴 문자열에 폭발 문자열이 포함되어 있을 수도 있다.
폭발은 폭발 문자열이 문자열에 없을 때까지 계속된다.
상근이는 모든 폭발이 끝난 후에 어떤 문자열이 남는지 구해보려고 한다. 
남아있는 문자가 없는 경우가 있다. 이때는 "FRULA"를 출력한다.

폭발 문자열은 같은 문자를 두 개 이상 포함하지 않는다.

입력
첫째 줄에 문자열이 주어진다. 문자열의 길이는 1보다 크거나 같고, 1,000,000보다 작거나 같다.

둘째 줄에 폭발 문자열이 주어진다. 길이는 1보다 크거나 같고, 36보다 작거나 같다.

두 문자열은 모두 알파벳 소문자와 대문자, 숫자 0, 1, ..., 9로만 이루어져 있다.

출력
첫째 줄에 모든 폭발이 끝난 후 남은 문자열을 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 1000000 + 1;
string s;
string bomb;
char result[SIZE];
int idx = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> s >> bomb;
    
    for (int i = 0; i < s.length(); i++) {
        result[idx++] = s[i];
        if (result[idx - 1] == bomb[bomb.length() - 1]) {
            if (idx - bomb.length() < 0) 
                continue;

            bool detected = true;
            for (int j = 0; j < bomb.length(); j++)
                if (result[idx - j - 1] != bomb[bomb.length() - j - 1]) {
                    detected = false;
                    break;
                }
            if (detected)
                idx -= bomb.length();
        }
    }
    if (!idx)
        cout << "FRULA" << '\n';
    else {
        for (int i = 0; i < idx; i++)
            cout << result[i];
        cout << "\n";
    }
}

