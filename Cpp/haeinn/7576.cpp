#include <iostream>
#include <queue>
#include <vector>
//#define MAXINT 2100000000

using namespace std;

int M,N;
int ary[1000][1000];
int visited[1000][1000];
int ripe;
int unripe;
int empty;
int dirX[4] = {1, 0, -1, 0};
int dirY[4] = {0, 1, 0, -1};
vector<pair<int,int>> v;
queue<pair<int,int>> q;
int minDay;

int main() {
    cin >> M >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> ary[i][j];
            if(ary[i][j] == 1){
                ripe++;
                visited[i][j] = 1;
                v.emplace_back(make_pair(i,j));
            }
            else if(ary[i][j] == 0) unripe++;
            else if(ary[i][j] == -1){
                visited[i][j] = -1;
                empty++;
            };
        }
    }


    if(ripe == M*N - empty) cout << 0;
    else if(unripe == M*N - empty) cout << -1;
    else{
        for(const auto & i : v){
            q.push(i);
        }
        while(!q.empty()){
            int a = q.front().first;
            int b = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++) {
                int x = a + dirX[i];
                int y = b + dirY[i];
                if(x >= 0 && y >= 0 && x < N && y < M && visited[x][y] == 0) {
                    q.push(make_pair(x,y));
                    visited[x][y] = visited[a][b] + 1;
                    minDay = max(minDay, visited[x][y]);
                    unripe--;
                }
            }
        }

        if(unripe != 0) cout << -1;
        else cout << minDay - 1;


    }

    return 0;
}
