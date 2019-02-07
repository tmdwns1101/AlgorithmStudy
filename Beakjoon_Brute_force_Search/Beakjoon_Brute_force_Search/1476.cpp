//#include<iostream>
//
//using namespace std;
//
//
//int Solution(int e, int s, int m) {
//	int ans = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	while (1)
//	{
//		if (i == e && j == s && k == m) {
//			break;
//		}
//
//		if (i == 15) i = 0;
//		if (j == 28) j = 0;
//		if (k == 19) k = 0;
//
//		i++;
//		j++;
//		k++;
//		ans++;
//	}
//
//	return ans;
//}
//
//
//
//int main() {
//	int earth, sun, moon;
//
//	cin >> earth >> sun >> moon;
//
//	int result = Solution(earth, sun, moon);
//
//	cout << result << '\n';
//
//	return 0;
//}