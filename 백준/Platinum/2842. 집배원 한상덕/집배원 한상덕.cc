#include <iostream>
#include <deque>
#include <unordered_map>
#include <algorithm>
using namespace std;
int height[50][50];
int dx[] = { -1,-1,-1,0,1,1,1,0 }, dy[] = { -1,0,1,1,1,0,-1,-1 };
char village[50][50];
int housecnt = 0;
int startx, starty,N,minnmax=0,ans=1000000;
deque<int> highs;
bool startmorning(int minh, int maxh) {
    bool visited[50][50] = { false };
    int cnt=0;
    deque<pair<int, int>> dq;
    dq.push_back(make_pair(startx, starty)); 
    visited[startx][starty] = true;
    while(!dq.empty())
    {
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();
        for (int k = 0; k < 8; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (height[nx][ny] <= maxh && height[nx][ny] >= minh && !visited[nx][ny]) {
                    if (village[nx][ny] == 'K') {
                        cnt++;
                        if (cnt == housecnt)return true; 
                    }
                    visited[nx][ny] = true;
                    dq.push_back(make_pair(nx, ny));
                }
            }
        }
    }
    return false;
}
void bsearch(int l, int r) { //최대높이는 highs[r]일때 최소높이 찾기.
    int maxh = highs[r];
    while (l <= r) {
        int m = (l + r) / 2;
        if (height[startx][starty] < highs[m])r = m - 1; //최소 높이 낮춤
        else if (startmorning(highs[m], maxh)) { //범위 안이 가능하므로 최소높이 올리기.
            ans = min(ans, maxh-highs[m]);
            l = m + 1;
        }
        else r = m - 1;
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    unordered_map<int, int> keys;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> village[i][j];
            if (village[i][j] == 'P') {
                startx = i;
                starty = j;
            }
            else if (village[i][j] == 'K')housecnt++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> height[i][j];
            if (!keys[height[i][j]]) {
                keys[height[i][j]] = 1;
                highs.push_back(height[i][j]);
            }
            if (village[i][j] != '.')minnmax = max(minnmax, height[i][j]);
        }
    }
    sort(highs.begin(), highs.end());
    for (int i = highs.size() - 1; i >= 0; i--) {
        if (highs[i] < minnmax)break;
        bsearch(0, i); 
    }
    cout << ans;
    return 0;
}