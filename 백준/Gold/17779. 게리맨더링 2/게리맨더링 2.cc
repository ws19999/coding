#include <iostream>
#include <climits>
using namespace std;
int n, startx, starty, totalsum = 0, ans = INT_MAX;
int table[20][20];
int gu[6];
int dx[] = { 1,1,-1,-1 };
int dy[] = { -1,1,1,-1 };
void dfs(int x, int y, int seq)
{
    if (seq == 0)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                gu[2] += table[i][j];
            }
            for (int j = y + 1; j < n; j++)
            {
                gu[3] += table[i][j];
            }
        }
        for (int j = y + 1; j < n; j++)
        {
            gu[3] += table[x][j];
        }
        int temp = gu[3];
        while (x < n - 2 && y>0)
        {
            x++;
            y--;
            for (int j = 0; j <= y; j++)
            {
                gu[2] += table[x - 1][j];
            }
            for (int i = x; i < n; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    gu[4] += table[i][j];
                }
            }
            dfs(x, y, 1);
            gu[4] = 0;
            gu[3] = temp;
        }
    }
    if (seq == 1)
    {
        int lastx = startx + 1;
        int lasty = starty + 1;
        x++;
        y++;
        while (lasty < n && x < n)
        {
            for (int i = x; i < n; i++)gu[4] += table[i][y - 1];
            for (int j = lasty + 1; j < n; j++)gu[3] += table[lastx][j];
            for (int i = x + 1; i < n; i++)
            {
                for (int j = y; j < n; j++)
                {
                    gu[5] += table[i][j];
                }
            }
            int yy = lasty;
            for (int tempx = lastx + 1; tempx <= x; tempx++)
            {
                for (int tempy = yy; tempy < n; tempy++)
                {
                    gu[5] += table[tempx][tempy];
                }
                yy--;
            }
            gu[1] = totalsum - gu[2] - gu[3] - gu[4] - gu[5];
            int tempmax = 0;
            int tempmin = INT_MAX;
            for (int i = 1; i <= 5; i++)
            {
                tempmax = max(tempmax, gu[i]);
                tempmin = min(tempmin, gu[i]);
            }
            ans = min(ans, tempmax - tempmin);
            x++;
            y++;
            lastx++;
            lasty++;
            gu[5] = 0;
        }
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> table[i][j];
            totalsum += table[i][j];
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            startx = i;
            starty = j;
            dfs(i, j, 0);
            gu[2] = 0;
            gu[3] = 0;
        }
    }
    cout << ans;
    return 0;
}
