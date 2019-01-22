#include<iostream>

#pragma warning(disable :4996)

using namespace std;


#define arySize 300001


int ary[arySize];
int temp[arySize];


//index 는 temp 제일 오른쪽 인덱스 , target은 temp에 제일 오른쪽 수 보다 작은 ary[] 원소
void LisFunc(int index,int target) {
	int left = 0;
	int right = index;
	int mid;
	
	while (left < right) {
		mid = (left + right) / 2;
		if (target > temp[mid]) {
		
			left = mid + 1;
		
		}
		else
			right = mid;
	}

	temp[right] = target;

}



int main() {
	int N;
	int cnt = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &ary[i]);
	}

	int lis = 0;;
	int ary_index = 1;
	temp[0] = ary[0];

	for (int i = ary_index; i < N; i++) {
		if (temp[lis] < ary[i]) {
			lis++;
			temp[lis] = ary[i];
		}
		else {
			LisFunc(lis, ary[i]);
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}