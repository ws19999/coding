#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;
int cell[12][12],cnt=0,N,maxcore=0,ans=500;
vector<pair<int, int>> cores;
int dx[] = { -1,0,1,0 }, dy[] = { 0,-1,0,1 };
void dfs(int depth,int corecnt,int length) {
    if (depth == cnt) {
        if (maxcore < corecnt) {
            maxcore = corecnt;
            ans = length;
        }
        else if (maxcore == corecnt)ans = min(ans, length);
        return;
    }
    for (int k = 0; k < 4; k++) {
        int x = cores[depth].first;
        int y = cores[depth].second;
        bool possible = true;
        while(true) {
            x += dx[k];
            y += dy[k];
            if (x < 0 || x >= N || y < 0 || y >= N)break;
            if (cell[x][y]) {
                possible = false;
                break;
            }
        }
        if (possible) {
            int l = 0;
            x = cores[depth].first;
            y = cores[depth].second;
            while (true) {
                x += dx[k];
                y += dy[k];
                if (x < 0 || x >= N || y < 0 || y >= N)break;
                l++;
                cell[x][y] = 1;
            }
            dfs(depth + 1, corecnt + 1, length + l);
            x = cores[depth].first;
            y = cores[depth].second;
            while (true) {
                x += dx[k];
                y += dy[k];
                if (x < 0 || x >= N || y < 0 || y >= N)break;
                cell[x][y] = 0;
            }
        }
    }
    dfs(depth + 1, corecnt, length);
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        maxcore = 0;
        ans = 500;
        cnt = 0;
        cin >> N;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> cell[i][j];
                if (cell[i][j] && i != 0 && i != N - 1 && j != 0 && j != N - 1) {
                    cores.push_back(make_pair(i, j));
                    cnt++;
                }
            }
        }
        dfs(0, 0,0);
        cout << "#" << tc << " " << ans << "\n";
        cores.clear();
    }
    return 0;
}