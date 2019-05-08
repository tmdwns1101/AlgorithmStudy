//#include<iostream>
//#pragma warning(disable : 4996)
//
//
//int ary[101];
//
//
//bool Check(int target) {
//
//
//	//int last = target / 2;
//
//	if (target == 1) return false;
//
//	for (int i = 2; i < target; i++) {
//		if (target%i == 0) return false;
//	}
//	return true;
//}
//
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &ary[i]);
//		if (Check(ary[i])) ans++;
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}