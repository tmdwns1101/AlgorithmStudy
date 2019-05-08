//#include <string>
//#include <vector>
//#include <stack>
//#include <iostream>
//using namespace std;
//
//
//
//vector<int> solution(vector<int> prices) {
//	vector<bool> check(prices.size());
//	vector<int> answer(prices.size());
//	stack<int> st;
//	for (int i = 0; i < check.size(); i++) {
//		check[i] = true;
//		answer[i] = 0;
//	}
//	st.push(prices[0]);
//	
//	for (int i = 1; i < prices.size(); i++) {
//		for (int j = 0; j < i; j++) {
//			if(check[j] == true)
//				answer[j] += 1;
//		}
//		
//		int k = 1;
//		while (st.top() > prices[i]) {
//			st.pop();
//			check[i - k] = false;
//			k++;
//			if (st.empty()) break;
//		}
//		st.push(prices[i]);
//	}
//
//	return answer;
//}
//
//int main() {
//	vector<int> prices;
//	prices.push_back(2);
//	prices.push_back(2);
//	prices.push_back(3);
//	prices.push_back(5);
//	prices.push_back(3);
//	prices.push_back(3);
//
//
//	vector<int> re = solution(prices);
//
//	for (int i = 0; i < re.size(); i++) {
//		cout << re[i] << " ";
//	}
//	cout << "\n";
//}