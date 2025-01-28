#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int dx[] = { 0,-1,1,0,0 }, dy[] = { 0,0,0,-1,1 };
vector<pair<int, int>> nums;
int table[50][50],N,ans[4],lasts;
void make_numbers() {
    int dxx[] = { 0,1,0,-1 }, dyy[] = { -1,0,1,0 };
    int d = 0;
    int x = (N + 1) / 2, y = (N + 1) / 2;
    for (int k = 1; k <= N - 1; k++) {
        for (int a = 0; a < 2; a++) {
            for (int t = 1; t <= k; t++) {
                x += dxx[d];
                y += dyy[d];
                nums.push_back(make_pair(x, y));
            }
            d = (d + 1) % 4;
        }
    }
    for (int k = 1; k <= N - 1; k++) {
        x += dxx[d];
        y += dyy[d];
        nums.push_back(make_pair(x, y));
    }
}
bool check(int i,int color) {
    
    int cnt = 1;
    for (int a = i + 1; a < lasts; a++) {
        if (table[nums[a].first][nums[a].second] != color)break;
        cnt++;
    }
    if (cnt >= 4) {
        for (int a = i; a < i + cnt; a++)table[nums[a].first][nums[a].second] = 0;
        if(color<=3)ans[color] += cnt;
        return true;
    }
    return false;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M;
    cin >> N>>M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> table[i][j];
        }
    }
    make_numbers();
    lasts = N*N - 1;
    for (int i = 0; i < M; i++) {
        int d, s,x=(N+1)/2,y=(N+1)/2;
        cin >> d >> s;
        for (int a = 0; a < s; a++) {
            x += dx[d];
            y += dy[d];
            table[x][y] = 0;
        }
        bool explode = true;
        while (explode) {
            int l = 0, r = 0;
            while (r < lasts) {
                if (!table[nums[r].first][nums[r].second])r++;
                else {
                    int c = table[nums[r].first][nums[r].second];
                    table[nums[l].first][nums[l].second] = c;
                    l++;
                    r++;
                }
            }
            for (int i = l; i < lasts; i++)table[nums[i].first][nums[i].second] = 0;
            lasts = l;
            explode = false;
            for (int i = 0; i < lasts; i++) {
                int color = table[nums[i].first][nums[i].second];
                if (color) {
                    if (check(i, color))explode = true;
                }
            }
        }
        int color = 0,cnt=0;
        deque<pair<int, int>> dq;
        for (int i = 0; i < lasts; i++) {
            if (color != table[nums[i].first][nums[i].second]) {
                if (cnt) {
                    dq.push_back(make_pair(cnt, color));
                }
                color = table[nums[i].first][nums[i].second];
                cnt = 1;
            }
            else cnt++;
        }
        if (cnt) {
            dq.push_back(make_pair(cnt, color));
        }
        int pos = 0;
        for (auto i : dq) {
            table[nums[pos].first][nums[pos].second] = i.first;
            pos++;
            table[nums[pos].first][nums[pos].second] = i.second;
            pos++;
            if (pos > N * N - 2)break;
        }
        lasts = pos;
    }
    cout << ans[1] + 2 * ans[2] + 3 * ans[3];
    return 0;
}