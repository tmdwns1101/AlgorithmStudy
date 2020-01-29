#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#define MAXINT 2000000000
using namespace std;

int N, M;
int ary[51][51];
vector<pair<int,int>> house;
vector<pair<int,int>> chicken;

vector<int> v;

int main() {
    cin >> N;
    cin >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++) {
            cin >> ary[i][j];
            if(ary[i][j] == 1){
                house.push_back(make_pair(i,j));
            }
            else if(ary[i][j] == 2) {
                chicken.push_back(make_pair(i,j));
            }
        }
    }
    for(int j = 0; j < (int)chicken.size() - M; j++) {
        v.push_back(0);
    }
    for(int i = 0; i < M; i++) {
        v.push_back(1);
    }
    int sumMin = MAXINT;
    do{
        int sum = 0; // 해당 순열에서의 치킨거리
        for(int i = 0; i < (int)house.size(); i++) {
            int minDistance = MAXINT;
            for(int j = 0; j < (int)chicken.size(); j++) {
                if(v[j] == 0) continue;
                int r1,r2,c1,c2;
                r1 = house[i].first;
                c1 = house[i].second;
                r2 = chicken[j].first;
                c2 = chicken[j].second;
                minDistance = min(minDistance, abs(r1-r2) + abs(c1 - c2));
            }
            sum += minDistance;
        }
        sumMin = min(sumMin,sum); // 순열들 간의 치킨 거리중 가장 짧은 치킨거리 저장
    }while(next_permutation(v.begin(),v.end()));

    cout << sumMin;

    return 0;
}