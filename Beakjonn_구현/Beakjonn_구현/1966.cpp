//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//int main() {
//	int test;
//	
//	scanf("%d", &test);
//
//	while (test--) {
//		int n, k;
//		int cnt = 0;
//		
//		scanf("%d %d", &n, &k);
//		queue<pair<int,bool>> q;
//		vector<int> maxAry;
//		int max = 0;
//		for (int i = 0; i < n; i++) {
//			int num;
//			scanf("%d", &num);
//			if(i == k) q.push(make_pair(num, true));
//			else q.push(make_pair(num,false));
//
//			maxAry.push_back(num);
//			
//		}
//		sort(maxAry.begin(), maxAry.end());
//		int j = maxAry.size()-1;
//
//		
//		bool endFlag = false;
//		pair<int, bool> now;
//		while(!q.empty()){
//			
//
//			for (int i = 0; i < q.size(); i++) {
//				now = q.front();
//				if (now.first < maxAry[j]) {
//					q.pop();
//					q.push(now);
//				}
//				else {
//					q.pop();
//					cnt++;
//					if (j != 0) j--;
//					if (now.second == true) endFlag = true;
//					break;
//				}
//			}
//			if (endFlag == true)
//				break;
//		}
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}