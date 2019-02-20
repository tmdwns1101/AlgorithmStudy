//#include<iostream>
//#include<cstring>
//
//#pragma warning(disable : 4996)
//
//using namespace std;
//
//
//int n = 20;
//char ary[8];
//
//
//int main() {
//	int m;
//	int s;
//	scanf("%d", &m);
//
//	s = 0;
//	while (m) {
//		int x;
//		scanf("%s", ary);
//
//		if (!strcmp(ary, "add")) {
//			scanf("%d", &x);
//			x--;
//			s = s | (1 << x);
//		}
//		else if (!strcmp(ary, "remove")) {
//			scanf("%d", &x);
//			x--;
//			s = s & ~(1 << x);
//		}
//		else if (!strcmp(ary, "check")) {
//			scanf("%d", &x);
//			x--;
//			int res;
//			res = s & (1 << x);
//			if (res) printf("1\n");
//			else printf("0\n");
//		}
//		else if (!strcmp(ary, "toggle")) {
//			scanf("%d", &x);
//			x--;
//			s = s ^ (1 << x);
//		}
//
//		else if (!strcmp(ary, "all")) {
//			s = (1 << n) - 1;
//
//		}
//		else
//			s = 0;
//
//		m--;
//	}
//	return 0;
//}