#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>

//***version 1****/

#pragma warning(disable :4996)

using namespace std;


int Cmp(int a, int b) {
	if (a < 0 && b < 0)
		return abs(a) < abs(b);
	else
		return a < b;
}


int main() {
	int n;
	int sum = 0;

	scanf("%d", &n);

	vector<int> ary(n+1);

	ary[0]=1;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &ary[i]);
	}
	
	sort(ary.begin()+1, ary.end(),Cmp);

	bool zero = false;

	for (int i = n; i > 0; i = i - 2) {
		if (ary[i] > 0) {
			if (ary[i - 1] == 1 || ary[i - 1] <= 0) { 
				//sum += ary[i] + ary[i - 1];
				sum += ary[i];
				i++;
			}
			else sum += ary[i] * ary[i - 1];
		}
		else if (ary[i] < 0) {
			if (zero && i ==1 ) sum += ary[i] * 0;
			else sum += ary[i] * ary[i - 1];
		}
		else {
			if (i == 2) sum += ary[i] * ary[i - 1];
			else {
				i++;
				zero = true;
			}
		}
		
	}

	printf("%d\n", sum);

	return 0;
}