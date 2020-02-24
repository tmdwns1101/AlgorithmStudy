/*
a+b*c를 후위 표기식으로 바꾸면 abc*+가 된다.

중위 표기식을 후위 표기식으로 바꾸는 방법을 간단히 설명하면 이렇다. 
우선 주어진 중위 표기식을 연산자의 우선순위에 따라 괄호로 묶어준다. 
그런 다음에 괄호 안의 연산자를 괄호의 오른쪽으로 옮겨주면 된다.

예를 들어 a+b*c는 (a+(b*c))의 식과 같게 된다. 
그 다음에 안에 있는 괄호의 연산자 *를 괄호 밖으로 꺼내게 되면 (a+bc*)가 된다. 
마지막으로 또 +를 괄호의 오른쪽으로 고치면 abc*+가 되게 된다.

다른 예를 들어 그림으로 표현하면 A+B*C-D/E를 완전하게 괄호로 묶고 
연산자를 이동시킬 장소를 표시하면 ABC*+DE/- 가 된다.

입력
첫째 줄에 중위 표기식이 주어진다. 
단 이 수식의 피연산자는 A~Z의 문자로 이루어지며 수식에서 한 번씩만 등장한다. 
그리고 -A+B와 같이 -가 가장 앞에 오거나 AB와 같이 *가 생략되는 등의 수식은 주어지지 않는다. 
표기식은 알파벳 대문자와 +, -, *, /, (, )로만 이루어져 있으며, 길이는 100을 넘지 않는다.

출력
첫째 줄에 후위 표기식으로 바뀐 식을 출력하시오
*/

// 우선순위 : 1. 괄호 2. 곱셈/나눗셈 3. 덧셈/뺄셈
// A+B+(C+D)/E-F = (((A+B)+((C+D)/E))-F) = (AB+ + ECD+/ - F) = AB+ECD+/+ - F
/*
1. 알파벳이 나오면 바로 결과에 넣어준다.
2. 연산자
    2-1. 괄호를 제일 먼저 연산하기 때문에 괄호열기 '(' 는 바로 스택에 넣어준다.
    2-2. '*', '/' 는 '+', '-'보다 우선순위가 높기 때문에 스택이 비거나 
         스택에서 우선순위가 낮은 연산자가 나올 때 까지 결과에 넣어준다.
    2-3. '+', '-' 는 스택이 비거나 '('이 나올 때 까지 결과에 추가한다.
    2-4. ')' 는 스택의 top()이 '('가 나올 때 까지 결과에 추가하고 '('도 pop()한다.
3. 반복문을 다 돌고 스택이 비어있지 않다면 남은 연산자들을 결과에 추가한다.
*/

#include <iostream>
#include <string>
#include <stack> // 값을 끝에서 빼줘야함 (Last In First Out)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    string result;
    stack<char> s;


    for (int i = 0; i < str.length(); i++) {
        // 1
        if ('A' <= str[i] && str[i] <= 'Z') {
            result += str[i];
        }
        else {
            switch (str[i]) {
            // 2-1
            case '(':
                s.push(str[i]);
                break;
            // 2-2
            case '*':
            case '/':
                while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
                    result += s.top();
                    s.pop();
                }
                s.push(str[i]);
                break;
            // 2-3
            case '+':
            case '-':
                while (!s.empty() && s.top() != '(') {
                    result += s.top();
                    s.pop();
                }
                s.push(str[i]);
                break;
            // 2-4
            case ')':
                while (!s.empty() && s.top() != '(') {
                    result += s.top();
                    s.pop();
                }
                // '(' pop
                s.pop(); 
                break;
            }
        }
    }

    // 3
    while (!s.empty()) {
        result += s.top();
        s.pop();
    }

    cout << result;

    return 0;
}