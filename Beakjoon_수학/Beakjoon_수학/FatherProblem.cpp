#include<iostream>
#include<cmath>
#include<random>
#include<ctime>
#include<cstring>
#include<queue>
using namespace std;


#define MIN 2.8
#define MAX 4.3

double scoredis[16];

int main() {
	int problem = 8;
	int score = 28;
	double ans[8];
	bool check[16];
	memset(check, true, sizeof(check));
	int k = 0;
	for (double i = 4.3; i >= MIN;) {
		scoredis[k] = i;
		k++;
		i = i - 0.1;
	}
	srand((unsigned int)time(NULL));

	double sum = 0;
	int cnt = problem;
	int idx = 0;
	queue<pair<double,double>> score;
	vector<double> candidate;  //




	for (int i = 0; i < problem; i++) {
		cout << ans[i] << ' ';
	}

	return 0;

}