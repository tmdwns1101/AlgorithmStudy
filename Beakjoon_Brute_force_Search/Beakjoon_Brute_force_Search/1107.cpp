//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//vector<int> input;
//
//int Solution(int n) {
//	int ary[6];
//	int position[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int index = 5;
//	int st = 0; // 0이 아닌 시작 index
//	bool st_flag = false;
//
//	int left, right;
//
//	int close_num = 0;
//	int ans = 0;
//
//	int direct = 0;
//	int pass = 0;
//
//	direct = abs(100 - n);
//
//	for (int i = 0; i < input.size(); i++) {
//		position[input[i]] = -1;
//	}
//
//	int temp = n;
//
//	for (int i = 100000; i >= 1; i = i / 10) {
//		int value = temp / i;
//		
//		ary[index] = value;
//		if (value != 0 && st_flag == false) {
//			st = index;
//			st_flag = true;
//		}
//		index--;
//		temp -= value * i;
//	}
//
//	pass += st + 1;  //자리수 만큼 수를 눌러야함
//
//	int up_down_flag = 3;  //up is 1 down is 2 equal is 3
//	
//	int cur;
//
//	for (int i = st; i >= 0 ; i--) {
//		
//		right = -1;
//		left = -1;
//		for (int j = ary[i]; j <= 9; j++) {
//			
//			if (position[j] != -1) {
//				right = j - ary[i];
//				if(up_down_flag == 1 || up_down_flag == 3)
//				break;
//			}
//		}
//		for (int k = ary[i] - 1; k >= 0; k--) {
//			if (position[k] != -1) {
//				left = ary[i] - k;
//				if(up_down_flag == 2 || up_down_flag == 3)
//				break;
//			}
//		}
//
//
//		if (up_down_flag == 3){
//			if (left == -1) {
//				cur = (ary[i] + right);
//				close_num += (ary[i] + right) * pow(10, i);
//			}
//			else if (right == -1) {
//				cur = (ary[i] - left);
//				close_num += (ary[i] - left) * pow(10, i);
//			}
//			else {
//				cur = right <= left ? (ary[i] + right) : (ary[i] - left);
//				close_num += right <= left ? (ary[i] + right) * pow(10, i) : (ary[i] - left) * pow(10, i);
//			}
//			if (cur < ary[i])
//				up_down_flag = 2;
//			else if (cur > ary[i])
//				up_down_flag = 1;
//			else
//				up_down_flag = 3;
//
//		}
//
//		else if (up_down_flag == 1) {
//			if (left != -1) {
//				close_num += (ary[i] - left) * pow(10, i);
//			}
//			else {
//				close_num += (ary[i] + right) * pow(10, i);
//			}
//
//		}
//		else {
//			if (right != -1) {
//				close_num += (ary[i] + right) * pow(10, i);
//			}
//			else {
//				close_num += (ary[i] - left) * pow(10, i);
//			}
//		}
//		/*if (close_num < n)
//			up_down_flag = 2;
//		else if (close_num > n)
//			up_down_flag = 3;
//		else
//			up_down_flag = 1;*/
//
//
//		////
//		/*if(up_down_flag == true)
//			close_num += right <= left ? (ary[i] + right) * pow(10,i) : (ary[i] - left) * pow(10,i);
//		else
//			close_num += right >= left ? (ary[i] + right) * pow(10, i) : (ary[i] - left) * pow(10, i);
//		
//		if (close_num < n)
//			up_down_flag = false;*/
//
//	}
//
//	while (close_num != n) {
//		if (close_num > n) {
//			close_num--;
//		}
//		else
//			close_num++;
//
//		pass++;
//	}
//
//	ans = min(direct, pass);
//
//	return ans;
//}
//
//
//int main() {
//	int n;
//	int m;
//	int result;
//	int button;
//	scanf("%d", &n);
//
//	scanf("%d", &m);
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &button);
//		input.push_back(button);
//	}
//
//	result = Solution(n);
//
//	printf("%d\n", result);
//
//	return 0;
//	
//}