//#include<iostream>
//#pragma warning(disable : 4996)
//using namespace std;
//
//
//int main() {
//	char card[100][100];
//
//	int R, C;
//
//	cin >> R >> C;
//
//
//	for (int i = 0; i < R; i++) {
//		scanf("%s", card[i]);
//	}
//
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//
//			card[i][2 * C - 1 - j] = card[i][j];  //¿À¸¥ÂÊ ´ëÄª
//			card[2 * R - 1 - i][j] = card[i][j]; //¾Æ·¡ÂÊ ´ëÄª
//			card[2 * R - 1 - i][2 * C - 1 - j] = card[i][j]; //´ë°¢¼± ´ëÄª
//		}
//	}
//
//	int xpos, ypos;
//	cin >> xpos >> ypos;
//
//	if (card[xpos - 1][ypos - 1] == '#') card[xpos - 1][ypos - 1] = '.';
//	else  card[xpos - 1][ypos - 1] = '#';
//
//	for (int i = 0; i < 2*R; i++) {
//		for (int j = 0; j < 2*C; j++) {
//			printf("%c", card[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}