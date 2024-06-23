#include <iostream>
#include <vector>
using namespace std;
int dx[5] = { 0,0,0,-1,1 };
int dy[5] = { 0,1,-1,0,0 };
struct kan
{
    vector <int> vec;
    int color;
};
kan map[13][13];
int table[11][3];
int n, k;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    bool done = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j].color;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        int x, y, dir;
        cin >> x >> y >> dir;
        table[i][0] = x;
        table[i][1] = y;
        table[i][2] = dir;
        map[x][y].vec.push_back(i);
    }
    int turn;
    for (turn = 1; turn <= 1001; turn++)
    {
        for (int i = 1; i <= k; i++)
        {
            if (table[i][0] + dx[table[i][2]] <= 0 || table[i][0] + dx[table[i][2]] > n || table[i][1] + dy[table[i][2]] <= 0 || table[i][1] + dy[table[i][2]] > n)
            {
                if (table[i][2] == 1)table[i][2] = 2;
                else if(table[i][2]==2)table[i][2] = 1;
                else if (table[i][2] == 3)table[i][2] = 4;
                else if (table[i][2] == 4)table[i][2] = 3;
                if (map[table[i][0] + dx[table[i][2]]][table[i][1] + dy[table[i][2]]].color == 2)continue;
            }
            else if (map[table[i][0] + dx[table[i][2]]][table[i][1] + dy[table[i][2]]].color == 2)
            {
                if (table[i][2] == 1)table[i][2] = 2;
                else if (table[i][2] == 2)table[i][2] = 1;
                else if (table[i][2] == 3)table[i][2] = 4;
                else if (table[i][2] == 4)table[i][2] = 3;
                if (table[i][0] + dx[table[i][2]] <= 0 || table[i][0] + dx[table[i][2]] > n || table[i][1] + dy[table[i][2]] <= 0 || table[i][1] + dy[table[i][2]] > n)continue;
                if (map[table[i][0] + dx[table[i][2]]][table[i][1] + dy[table[i][2]]].color == 2)continue;
            }
            if (map[table[i][0] + dx[table[i][2]]][table[i][1] + dy[table[i][2]]].color == 0)
            {
                int originx = table[i][0];
                int originy = table[i][1];
                int x = table[i][0] + dx[table[i][2]], y = table[i][1] + dy[table[i][2]];
                bool passed = false;
                int cnt = 0;
                for (auto t : map[originx][originy].vec)
                {
                    if (t == i) passed = true;
                    if (passed)
                    {
                        map[x][y].vec.push_back(t);
                        table[t][0] = x;
                        table[t][1] = y;
                        cnt++;
                    }
                }
                while (cnt--)map[originx][originy].vec.pop_back();
                if (map[x][y].vec.size() >= 4)
                {
                    done = true;
                    break;
                }
            }
            else if (map[table[i][0] + dx[table[i][2]]][table[i][1] + dy[table[i][2]]].color == 1)
            {
                int originx = table[i][0];
                int originy = table[i][1];
                int x = table[i][0] + dx[table[i][2]], y = table[i][1] + dy[table[i][2]];
                while (true)
                {
                    int t = map[originx][originy].vec.back();
                    map[originx][originy].vec.pop_back();
                    map[x][y].vec.push_back(t);
                    table[t][0] = x;
                    table[t][1] = y;
                    if (t == i)break;
                }
                if (map[x][y].vec.size() >= 4)
                {
                    done = true;
                    break;
                }
            }
        }
        if (done)break;
    }
    if (turn > 1000)cout << -1;
    else cout << turn;
    return 0;
}