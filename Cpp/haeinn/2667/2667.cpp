#include <iostream>
#include <vector>
#include <algorithm>
#define NL '\n'

using namespace std;

bool visited[25][25];
char maze [25][25];
int N;
vector <int> ans;

int sizeArea = 0;
int dirX[4] = {1, 0, -1, 0}; // right, up, left, down
int dirY[4] = {0,1,0,-1};

void DFS(int x, int y);

int main() {
    cin >> N;
    for(int i = 0; i < N; i ++) {
        for(int j = 0; j < N; j++) {
            cin >> maze[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(maze[i][j] == '1' && !visited[i][j]) {
                DFS(i,j);
                ans.push_back(sizeArea);
                sizeArea = 0;
            }
            if(maze[i][j] == '0' && !visited[i][j]) {
                visited[i][j] = true;
            }
        }
    }
    sort(ans.begin(),ans.end());
    int result;
    result = ans.size();

    cout << result << NL;

    for(int i = 0; i < result; i++){
        cout << ans[i] << NL;
    }
    return 0;
}

void DFS( int x, int y) {
    sizeArea++;
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int newX = x + dirX[i];
        int newY = y + dirY[i];
        if (newX >= 0 && newX < N && newY >= 0
        && newY < N && !visited[newX][newY] && maze[newX][newY] == '1') {
            DFS(newX, newY);
        }
    }
}