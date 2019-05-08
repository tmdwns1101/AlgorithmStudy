#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<cstring>

using namespace std;

int main() {
  
	stack<char> st;
	vector<char*> v;
	
	while (1) {
		char* s = new char[101];
		cin.getline(s,101);
		if (strcmp(s,".") == 0) {
			break;
		}
		v.push_back(s);
	}

	
	for (int i = 0; i < v.size(); i++) {
		if (!st.empty()) {
			while (!st.empty()) st.pop();
		}
		bool flag = true;
		for (int j = 0; j < strlen(v[i]); j++) {
			if (v[i][j] == '(' || v[i][j] == '[') {
				st.push(v[i][j]);
			}
			else if (v[i][j] == ')' || v[i][j] == ']') {
				if (st.empty() == true) {
					flag = false;
					break;
				}
				if (v[i][j] == ')' && st.top() != '(') {
					flag = false;
					break;
				}
				else if (v[i][j] == ']' && st.top() != '[') {
					flag = false;
					break;
				}
				st.pop();
			}

		}
		if (st.empty() == true && flag == true) printf("yes\n");
		else printf("no\n");
	}

	
}
