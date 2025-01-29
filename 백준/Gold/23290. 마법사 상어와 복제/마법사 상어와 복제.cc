#include <iostream>
#include <list>
#include <deque>
#include <vector>
using namespace std;
struct fish {
    int x, y, d;
};
list<fish> fishes;
deque<pair<int, int>> shark;
int grid[5][5], dx[] = { 0,-1,-1,-1,0,1,1,1 }, dy[] = { -1,-1,0,1,1,1,0,-1 };
int sharkdx[] = { 0,-1,0,1,0 }, sharkdy[] = { 0,0,-1,0,1 },sharkmove=555,sharkx,sharky,sharkvisited[5][5];
int fishsmell[5][5],fishmap[5][5],maxfishcnt;
void fish_move(int t) {
    auto f = fishes.begin();
    while (f != fishes.end()) {
        int x = (*f).x;
        int y = (*f).y;
        int d = (*f).d;
        for (int k = 0; k < 8; k++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 1 && nx <= 4 && ny >= 1 && ny <= 4) {
                if (!grid[nx][ny] && fishsmell[nx][ny]<t-2) {
                    (*f).x = nx;
                    (*f).y = ny;
                    (*f).d = d;
                    fishmap[x][y]--;
                    fishmap[nx][ny]++;
                    break;
                }
            }
            d = (d + 7) % 8;
        }
        f++;
    }
}
void sharkcheck(int depth,int d,int x,int y,int cnt) {
    if (depth == 3) {
        if (cnt > maxfishcnt) {
            maxfishcnt=cnt;
            sharkmove = d;
        }
        else if (cnt == maxfishcnt) sharkmove = min(sharkmove, d);
        return;
    }
    for (int i = 1; i <= 4; i++) {
        int nx = x + sharkdx[i];
        int ny = y + sharkdy[i];
        if (nx <= 0 || nx > 4 || ny <= 0 || ny > 4)continue;
        int ncnt = cnt;
        if (!sharkvisited[nx][ny]) ncnt += fishmap[nx][ny];
        sharkvisited[nx][ny]++;
        sharkcheck(depth + 1, d * 10 + i, nx, ny, ncnt);
        sharkvisited[nx][ny]--;
    }
}
void shark_move(int t) {
    int temp[3];
    temp[0] = sharkmove/100;
    sharkmove %= 100;
    temp[1] = sharkmove / 10;
    temp[2] = sharkmove % 10;
    sharkmove = 555;
    for (int i = 0; i <= 2; i++) {
        sharkx += sharkdx[temp[i]];
        sharky += sharkdy[temp[i]];
        grid[sharkx][sharky]++;
        if (fishmap[sharkx][sharky]) {
            fishmap[sharkx][sharky] = 0;
            fishsmell[sharkx][sharky] = t;
        }
        shark.push_back(make_pair(sharkx, sharky));
    }
}
void fish_delete() {
    auto f = fishes.begin();
    while (f != fishes.end()) {
        if (grid[(*f).x][(*f).y]) {
            fishes.erase(f++);
        }
        else f++;
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M, S;
    cin >> M >> S;
    for (int i = 0; i < M; i++) {
        int x, y, d;
        cin >> x >> y >> d;
        fish newfish;
        newfish.x = x;
        newfish.y = y;
        newfish.d = d - 1;
        fishes.push_back(newfish);
        fishmap[x][y]++;
    }
    cin >> sharkx >> sharky;
    shark.push_back(make_pair(sharkx, sharky));
    grid[sharkx][sharky] = 1;
    for (int magictime = 3; magictime <= S+2; magictime++) {
        //복제
        vector<fish> copied;
        for (auto f : fishes)copied.push_back(f);

        // 물고기 이동
        fish_move(magictime);

        //상어 이동방향 확인
        shark.pop_front();
        grid[sharkx][sharky] = 0;
        maxfishcnt = 0;
        sharkcheck(0, 0, sharkx, sharky, 0);

        //상어 이동
        shark_move(magictime);

        //물고기 삭제
        fish_delete();
        for (int i = 0; i < 2; i++) {
            grid[shark.front().first][shark.front().second]--;
            shark.pop_front();
        }
        //복제 마법 완료
        for (auto f : copied) {
            fishes.push_back(f);
            fishmap[f.x][f.y]++;
        }
    }
    cout << fishes.size();
    return 0;
}