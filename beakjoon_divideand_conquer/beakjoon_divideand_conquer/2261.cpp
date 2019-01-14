#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

#pragma warning(disable : 4996)


using namespace std;

//2261 Find Closet Points




struct Point {
	int xPos;
	int yPos;

};



int Distance(Point& pos1, Point& pos2) {
	return (pos1.xPos - pos2.xPos)*(pos1.xPos - pos2.xPos) + (pos1.yPos - pos2.yPos)*(pos1.yPos - pos2.yPos);
}

struct Comp {
	bool comp_switch;
	Comp(bool b):comp_switch(b){}
	bool operator()(Point& pos1, Point& pos2) {
		return (this->comp_switch ? pos1.xPos < pos2.xPos : pos1.yPos < pos2.yPos);
	}
};


int Closet_pair(vector<Point>::iterator it, int n) {
	if (n == 2) {
		return Distance(it[0], it[1]);
	}

	if (n == 3) {
		return min({  Distance(it[0],it[1]),Distance(it[0],it[2]),Distance(it[1],it[2]) });
	}

	int line = (it[n / 2 - 1].xPos + it[n / 2].xPos) / 2;

	int d = min(Closet_pair(it, n / 2), Closet_pair(it + n / 2, n - n / 2));

	vector<Point> mid;
	mid.reserve(n);
	int t;

	for (int i = 0; i < n; i++) {
		t = line - it[i].xPos;
		if (t*t < d)
			mid.push_back(it[i]);
	}

	sort(mid.begin(), mid.end(), Comp(false));

	int mid_size = mid.size();

	for (int i = 0; i < mid_size - 1; i++) {
		for (int j = i+1; j < mid_size&&mid[j].yPos - mid[i].yPos < d; j++) {
			d = min(d, Distance(mid[i], mid[j]));
		}
	}

	return d;
}

int main() {
	int n;
	
	int minDist;

	scanf("%d", &n);
	
	vector<Point> points(n);


	for (auto it = points.begin(); it != points.end(); it++)
		cin >> it->xPos >> it->yPos;

	sort(points.begin(), points.end(), Comp(true));

	minDist = Closet_pair(points.begin(), n);

	printf("%d", minDist);

	return 0;

}