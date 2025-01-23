#include <iostream>
#include <deque>
using namespace std;
int dx[] = { -1,-1,-1,0,1,1,1,0 }, dy[] = { -1,0,1,1,1,0,-1,-1 };
int maps[302][302],N;
void bombs(int i, int j) {
    deque<pair<int, int>> dq;
    dq.push_back(make_pair(i, j));
    while (!dq.empty()) {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        int cnt = 0;
        for (int k = 0; k < 8; k++) {
            if (maps[x + dx[k]][y + dy[k]] == -2)cnt++;
        }
        maps[x][y] = cnt;
        if (!cnt) {
            for (int k = 0; k < 8; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(nx>=1 && nx<=N && ny>=1 && ny<=N && maps[nx][ny] == -1){
                    dq.push_back(make_pair(nx, ny));
                    maps[nx][ny]=0;
                }
            }
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i <= 301; i++) {
        for (int j = 0; j <= 301; j++)maps[i][j] = -1;
    }
    for (int tc = 1; tc <= T; tc++) {
        int ans=0;
        cin >> N;
        char c;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                cin >> c;
                if (c == '*')maps[i][j] = -2;
            }
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (maps[i][j] == -1) {
                    int cnt = 0;
                    for (int k = 0; k < 8; k++) {
                        if (maps[i + dx[k]][j + dy[k]] == -2)cnt++;
                    }
                    if (!cnt) {
                        bombs(i, j);
                        ans++;
                    }
                }
            }
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (maps[i][j] == -1)ans++;
            }
        }
        cout <<"#"<<tc<<" "<<ans<<"\n";

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++)maps[i][j] = -1;
        }
    }
    return 0;
}