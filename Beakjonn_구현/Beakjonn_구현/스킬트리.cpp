//#include <string>
//#include <vector>
//#include<cstring>
//#include<algorithm>
//#include<iostream>
//
//using namespace std;
//
//int solution(string skill, vector<string> skill_trees) {
//	int answer = 0;
//	
//	vector < pair<bool, int> > checker(27);
//	int pre = -1;
//	int j = 0;
//	for (int i = 0; i < 26; i++) {
//		checker[i].first = false;
//		checker[i].second = -1;
//		
//	}
//
//	for (int i = 0; i < skill.length(); i++) {
//			if (pre == -1) {
//				checker[skill[i] - 'A'].second = skill[i] - 'A';
//				
//			}
//			else {
//				checker[skill[i] - 'A'].second = pre;
//
//			}
//			pre = skill[i] - 'A';
//
//	}
//	
//
//	for (int i = 0; i < skill_trees.size(); i++) {
//		bool flag = true;
//		vector < pair<bool, int> > temp = checker;
//		for (int j = 0; j < skill_trees[i].length(); j++) {
//			if (temp[skill_trees[i][j] - 'A'].second != -1) {
//				if (temp[temp[skill_trees[i][j] - 'A'].second].first == true || temp[temp[skill_trees[i][j] - 'A'].second].second == (skill_trees[i][j] - 'A') ){
//					temp[skill_trees[i][j] - 'A'].first = true;
//				}
//				else {
//					flag = false;
//					break;
//				}
//			}
//		}
//		if (flag == true) answer++;
//	}
//
//
//
//	return answer;
//}
//
//
//int main() {
//	vector<string> v;
//	v.push_back("BACDE");
//	v.push_back("CBADF");
//	v.push_back("AECB");
//	v.push_back("BDA");
//
//	int result = solution("CBD", v);
//
//	cout << result << endl;
//
//}