#include <iostream>
#include <vector>
#include <deque>
#include <tuple>
using namespace std;
int N,M,D,startmap[16][15],ans=0,startenemy=0,gamemap[16][15];
vector<int> archer;
vector<pair<int, int>> kills;
int dx[] = { 0,-1,0 }, dy[] = { -1,0,1 };
void findenemy(int s) {
    if (gamemap[N][s]) {
        kills.push_back(make_pair(N, s));
        return;
    }
    if (D == 1)return;
    bool visited[16][15] = { false };
    deque<tuple<int, int, int>> dq;
    dq.push_back(make_tuple(N, s, 1));
    visited[N][s] = true;
    while (!dq.empty()) {
        int x = get<0>(dq.front());
        int y = get<1>(dq.front());
        int d = get<2>(dq.front());
        dq.pop_front();
        for (int k = 0; k < 3; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 1 && ny >= 0 && ny < M) {
                if (visited[nx][ny])continue;
                if (gamemap[nx][ny]) {
                    kills.push_back(make_pair(nx, ny));
                    return;
                }
                visited[nx][ny] = true;
                if (d == D - 1)continue;
                dq.push_back(make_tuple(nx, ny, d + 1));
            }
        }
    }
}
void gamestart() {
    int tempans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            gamemap[i][j] = startmap[i][j];
        }
    }
    int enemy = startenemy;
    while (enemy) {
        for (auto i : archer)findenemy(i);
        for (auto i : kills) {
            if (gamemap[i.first][i.second]) {
                gamemap[i.first][i.second] = 0;
                enemy--;
                tempans++;
            }
        }
        kills.clear();
        for (int j = 0; j < M; j++) {
            if (gamemap[N][j])enemy--;
            for (int i = N; i >= 1; i--) {
                gamemap[i][j] = gamemap[i - 1][j];
            }
        }
    }
    ans = max(ans, tempans);
}
void find_archer(int depth, int p) {
    if (depth == 3) {
        gamestart();
        return;
    }
    for (int i = p + 1; i <= M-3+depth; i++) {
        archer.push_back(i);
        find_archer(depth + 1, i);
        archer.pop_back();
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> M>>D;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> startmap[i][j];
            if (startmap[i][j])startenemy++;
        }
    }
    find_archer(0, -1);
    cout << ans;
    return 0;
}