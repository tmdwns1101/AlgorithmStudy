/*
철수의 토마토 농장에서는 토마토를 보관하는 큰 창고를 가지고 있다. 
토마토는 격자모양 상자의 칸에 하나씩 넣은 다음, 상자들을 수직으로 쌓아 올려서 창고에 보관한다.

보관 후 하루가 지나면, 익은 토마토들의 인접한 곳에 있는 익지 않은 
토마토들은 익은 토마토의 영향을 받아 익게 된다. 
하나의 토마토에 인접한 곳은 위, 아래, 왼쪽, 오른쪽, 앞, 뒤 여섯 방향에 있는 토마토를 의미한다. 
대각선 방향에 있는 토마토들에게는 영향을 주지 못하며, 토마토가 혼자 저절로 익는 경우는 없다고 가정한다.

토마토를 창고에 보관하는 격자모양의 상자들의 크기와 익은 토마토들과 
익지 않은 토마토들의 정보가 주어졌을 때, 며칠이 지나면 토마토들이 모두 익는지, 
그 최소 일수를 구하는 프로그램을 작성하라. 단, 상자의 일부 칸에는 토마토가 들어있지 않을 수도 있다.

입력
첫 줄에는 상자의 크기를 나타내는 두 정수 M,N과 쌓아올려지는 상자의 수를 나타내는 H가 주어진다.
M은 상자의 가로 칸의 수, N은 상자의 세로 칸의 수를 나타낸다. 
단, 2 ≤ M ≤ 100, 2 ≤ N ≤ 100, 1 ≤ H ≤ 100 이다. 
둘째 줄부터는 가장 밑의 상자부터 가장 위의 상자까지에 저장된 토마토들의 정보가 주어진다. 
즉, 둘째 줄부터 N개의 줄에는 하나의 상자에 담긴 토마토의 정보가 주어진다. 
각 줄에는 상자 가로줄에 들어있는 토마토들의 상태가 M개의 정수로 주어진다. 
정수 1은 익은 토마토, 정수 0 은 익지 않은 토마토, 정수 -1은 토마토가 들어있지 않은 칸을 나타낸다. 
이러한 N개의 줄이 H번 반복하여 주어진다.

출력
여러분은 토마토가 모두 익을 때까지 최소 며칠이 걸리는지를 계산해서 출력해야 한다. 
만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야 하고, 
토마토가 모두 익지는 못하는 상황이면 -1을 출력해야 한다.
*/

#include <iostream>
#include <queue>

using namespace std;



const int MAX = 100;



typedef struct

{

    int y, x, z;

}Dir;



Dir moveDir[6] = { {1, 0, 0}, {-1, 0, 0}, {0, 1, 0}, {0, -1, 0}, {0, 0, 1}, {0, 0, -1} };



int M, N, H;

int tomato[MAX][MAX][MAX];

queue<pair<pair<int, int>, int>> q;

int noTomato;



//토마토가 전부 익었는지 확인

bool allRipe(void)

{

    int possible = M * N * H - noTomato;

    int cnt = 0;



    for (int i = 0; i < H; i++)

        for (int j = 0; j < N; j++)

            for (int k = 0; k < M; k++)

                if (tomato[j][k][i] == 1)

                    cnt++;



    return possible == cnt;

}



int BFS(void)

{

    int day = 0;



    //처음부터 익힐 수 있는 토마토가 없는 경우

    if (q.empty())

        return -1;



    while (!q.empty())

    {

        int currentSize = q.size();



        for (int i = 0; i < currentSize; i++)

        {

            int y = q.front().first.first;

            int x = q.front().first.second;

            int z = q.front().second;



            for (int i = 0; i < 6; i++)

            {

                int nextY = y + moveDir[i].y;

                int nextX = x + moveDir[i].x;

                int nextZ = z + moveDir[i].z;



                //다음 토마토가 범위 안에 있고 안 익었을 경우에만

                if (0 <= nextY && nextY < N && 0 <= nextX && nextX < M && 0 <= nextZ && nextZ < H)

                    if (tomato[nextY][nextX][nextZ] == 0)

                    {

                        tomato[nextY][nextX][nextZ] = 1;

                        q.push(make_pair(make_pair(nextY, nextX), nextZ));

                    }

            }

            q.pop();



            //익힐 수 있는 토마토를 전부 익혔고 전부 익었을 경우

            if (q.size() == 0 && allRipe())

                return day;

            //익힐 수 있는 토마토는 전부 익혔지만 안 익은 토마토 존재

            else if (q.size() == 0 && !allRipe())

                return -1;

        }

        day++;

    }

}



int main(void)

{

    cin >> M >> N >> H;



    for (int i = 0; i < H; i++)

        for (int j = 0; j < N; j++)

            for (int k = 0; k < M; k++)

            {

                cin >> tomato[j][k][i];

                if (tomato[j][k][i] == 1)

                    q.push(make_pair(make_pair(j, k), i)); //익은 토마토는 큐에 넣는다

                if (tomato[j][k][i] == -1)

                    noTomato++; //토마토를 넣을 수 없는 칸

            }



    if (q.size() == M * N * H - noTomato)

    {

        cout << 0 << endl; //모든 토마토 다 익었을 경우

    }

    else

    {

        int result = BFS();

        cout << result << endl;

    }

    return 0;

}