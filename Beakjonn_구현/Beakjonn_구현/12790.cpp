//#include<iostream>
//#pragma warning(disable : 4996)
//using namespace std;
//
//int main() {
//	int T;
//
//	cin >> T;
//
//	while (T--) {
//		int champion[4];
//		int equiment[4];
//
//		for (int i = 0; i<4; i++) {
//			scanf("%d", &champion[i]);
//		}
//		for (int i = 0; i<4; i++) {
//			scanf("%d", &equiment[i]);
//		}
//
//		int hp = (champion[0] + equiment[0]) < 1 ? 1 : (champion[0] + equiment[0]);
//		int mp = (champion[1] + equiment[1]) < 1 ? 1 : (champion[1] + equiment[1]);
//		int strength = (champion[2] + equiment[2])< 0 ? 0 : (champion[2] + equiment[2]);
//
//		int power = hp + 5 *mp + 2 * strength + 2 * (champion[3] + equiment[3]);
//
//		printf("%d\n", power);
//	}
//
//	return 0;
//}