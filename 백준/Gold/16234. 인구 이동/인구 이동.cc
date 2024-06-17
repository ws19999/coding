#include <iostream>
#include <deque>
using namespace std;
int Land[50][50];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };
bool moved[50][50] = { false };
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, L, R;
    cin >> n >> L >> R;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)cin >> Land[i][j];
    }
    int ans = 0;
    bool impossible = true;
    while (true)
    {
        impossible = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!moved[i][j])
                {
                    moved[i][j] = true;
                    int cnt = 1;
                    int sums = Land[i][j];
                    deque<pair<int, int>> dq;
                    dq.push_back(make_pair(i, j));
                    int pos = -1;
                    while (true)
                    {
                        pos++;
                        if (pos == cnt)break;
                        int x = dq[pos].first;
                        int y = dq[pos].second;
                        for (int k = 0; k < 4; k++)
                        {
                            int nextx = x + dx[k];
                            int nexty = y + dy[k];
                            if (nextx >= 0 && nextx < n && nexty >= 0 && nexty < n)
                            {
                                if (moved[nextx][nexty])continue;
                                int dif = abs(Land[x][y] - Land[nextx][nexty]);
                                if (dif >= L && dif <= R)
                                {
                                    cnt++;
                                    sums += Land[nextx][nexty];
                                    dq.push_back(make_pair(nextx, nexty));
                                    moved[nextx][nexty] = true;
                                }
                            }
                        }
                    }
                    if (cnt > 1)impossible = true;
                    while (!dq.empty())
                    {
                        Land[dq.front().first][dq.front().second] = sums / cnt;
                        dq.pop_front();
                    }
                }
            }
        }

        if (impossible)
        {
            ans++;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)moved[i][j] = false;
            }
        }
        else break;
    }
    cout << ans;
    return 0;
}