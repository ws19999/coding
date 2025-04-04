#include <iostream>
#include <deque>
using namespace std;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
typedef struct candy
{
    int x, y, count = 0;
}candy;
int main(void)
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char mapa[10][10];
    candy Red, Blue;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> mapa[i][j];
            if (mapa[i][j] == 'B')
            {
                Blue.x = i;
                Blue.y = j;
                mapa[i][j] = '.';
            }
            else if (mapa[i][j] == 'R')
            {
                Red.x = i;
                Red.y = j;
                mapa[i][j] = '.';
            }
        }
    }
    deque<pair<candy, candy>> dq;
    dq.push_back(make_pair(Red, Blue));
    while (!dq.empty())
    {
        Red = dq.front().first;
        Blue = dq.front().second;
        dq.pop_front();
        if (Red.count == 10)continue;
        candy nextred, nextblue;
        nextred.x = Red.x;
        nextred.y = Red.y;
        nextred.count = Red.count;
        nextblue.x = Blue.x;
        nextblue.y = Blue.y;
        for (int i = 0; i < 4; i++)
        {
            bool R = false;
            Red.x = nextred.x;
            Red.y = nextred.y;
            Red.count = nextred.count;
            Blue.x = nextblue.x;
            Blue.y = nextblue.y;
            if (i == 0 && Red.x < Blue.x)R = true;
            else if (i == 1 && Red.y < Blue.y)R = true;
            else if (i == 2 && Red.x > Blue.x)R = true;
            else if (i == 3 && Red.y > Blue.y)R = true;
            Red.count++;
            if (R)
            {
                while (true)
                {
                    if (mapa[Red.x + dx[i]][Red.y + dy[i]] == '.')
                    {
                        Red.x += dx[i];
                        Red.y += dy[i];
                    }
                    else if (mapa[Red.x + dx[i]][Red.y + dy[i]] == 'O')
                    {
                        Red.x += dx[i];
                        Red.y += dy[i];
                        break;
                    }
                    else break;
                }
                while (true)
                {
                    if (mapa[Blue.x + dx[i]][Blue.y + dy[i]] == 'O')
                    {
                        Blue.x += dx[i];
                        Blue.y += dy[i];
                        break;
                    }
                    else if (Blue.x + dx[i] == Red.x && Blue.y + dy[i] == Red.y)break;
                    else if (mapa[Blue.x + dx[i]][Blue.y + dy[i]] == '.')
                    {
                        Blue.x += dx[i];
                        Blue.y += dy[i];
                    }
                    else break;
                }
                if (mapa[Blue.x][Blue.y] == 'O')continue;
                if (mapa[Red.x][Red.y] == 'O')
                {
                    cout << Red.count;
                    return 0;
                }
            }
            else
            {
                while (true)
                {
                    if (mapa[Blue.x + dx[i]][Blue.y + dy[i]] == 'O')
                    {
                        Blue.x += dx[i];
                        Blue.y += dy[i];
                        break;
                    }
                    else if (mapa[Blue.x + dx[i]][Blue.y + dy[i]] == '.')
                    {
                        Blue.x += dx[i];
                        Blue.y += dy[i];
                    }
                    else break;
                }
                if (mapa[Blue.x][Blue.y] == 'O')continue;
                while (true)
                {
                    if (Red.x + dx[i] == Blue.x && Red.y + dy[i] == Blue.y)break;
                    if (mapa[Red.x + dx[i]][Red.y + dy[i]] == '.')
                    {
                        Red.x += dx[i];
                        Red.y += dy[i];
                    }
                    else if (mapa[Red.x + dx[i]][Red.y + dy[i]] == 'O')
                    {
                        Red.x += dx[i];
                        Red.y += dy[i];
                        break;
                    }
                    else break;
                }
                if (mapa[Red.x][Red.y] == 'O')
                {
                    cout << Red.count;
                    return 0;
                }
            }
            dq.push_back(make_pair(Red, Blue));
        }
    }
    cout << -1;
    return 0;
}