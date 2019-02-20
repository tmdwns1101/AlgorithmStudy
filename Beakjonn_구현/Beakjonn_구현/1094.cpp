//#include<iostream>
//
//using namespace std;
//
//
//int divide(int stick,int sum, int target) {
//	int ans = 0;
//	
//
//	int cur = stick / 2;
//	if (cur + sum < target) {
//		while (1) {
//			sum += cur;
//			
//			if (sum > target) {
//				ans += divide(cur, sum - cur, target);
//				return ans;
//			}
//			else if (sum == target) {
//				return ans;
//			}
//			else
//				ans++;
//		}
//	}
//	else if (cur + sum == target)
//		return 1;
//	else {
//		ans += divide(cur, sum, target);
//		return ans;
//	}
//}
//
//
//int main() {
//	int x;
//	cin >> x;
//
//	int ans = divide(64, 0, x);
//
//	cout << ans << endl;
//
//	return 0;
//}