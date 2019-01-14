#include<cstdio>



using namespace std;


#pragma warning(disable : 4996)



//2263 트리 순회


int inorder[100000];
int postorder[100000];
int position[100001];



void Solution(int in_s, int in_e, int post_s, int post_e) {
	if (in_s > in_e || post_s > post_e) return;
	
	int root = postorder[post_e];

	printf("%d ", root);
	int p = position[root];

	int left = p - in_s;

	//left divide
	Solution(in_s, p - 1, post_s, post_s + left-1);

	//right divide
	Solution(p + 1, in_e, post_s + left, post_e-1);
}


int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)  scanf("%d", &inorder[i]);
	for (int i = 0; i < n; i++)  scanf("%d", &postorder[i]);
	for (int i = 0; i < n; i++) position[inorder[i]] = i;

	Solution(0, n - 1, 0, n - 1);

	return 0;
}