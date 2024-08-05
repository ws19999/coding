#include <iostream>
#include <deque>
using namespace std;
int check[1001][1001];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
char map[1001][1001];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> map[i][j];
        }
    }
    deque<pair<int, int>> point;
    deque<pair<int, bool>> dq;
    point.push_back(make_pair(1, 1));
    dq.push_back(make_pair(1, false));
    int x, y, time;
    bool broken,av=false;
    while (!dq.empty())
    {
        x = point.front().first;
        y = point.front().second;
        point.pop_front();
        time = dq.front().first;
        broken = dq.front().second;
        dq.pop_front();
        if (!check[x][y])
        {
            if (broken)check[x][y] = 2;
            else check[x][y] = 1;
        }
        else if (check[x][y] == 1)continue;
        else if (check[x][y] == 2)
        {
            if (broken)continue;
            else check[x][y] = 1;
        }
        if (x == N && y == M)
        {
            av = true;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int nextx = x + dx[i];
            int nexty = y + dy[i];
            if (nextx <= 0 || nextx > N || nexty <= 0 || nexty > M)continue;
            if (map[nextx][nexty] == '1')
            {
                if (!broken)
                {
                    dq.push_back(make_pair(time + 1, true));
                }
                else continue;
            }
            else dq.push_back(make_pair(time + 1, broken));
            point.push_back(make_pair(nextx, nexty));
        }
    }
    if (av)cout << time;
    else cout << -1;
    return 0;
}