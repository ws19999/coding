#include <iostream>
using namespace std;
int players[9];
int innings[10][51],N,ans=0;
bool picked[10];
void play_game() {
    int ground[8]={0},score=0;
    int hitter = 8;
    for (int inning = 1; inning <= N; inning++) {
        int out = 0;
        for (int i = 1; i <= 3; i++)ground[i] = 0;
        while (out < 3) {
            hitter=(hitter+1)%9;
            int res = innings[players[hitter]][inning];
            if (res == 0)out++;
            else {
                ground[0] = 1;
                for (int i = 3; i >= 0; i--) {
                    if (ground[i]) {
                        ground[i + res]++;
                        ground[i] = 0;
                    }
                }
            }
        }
    }
    for (int i = 4; i <= 7; i++) {
        score += ground[i];
    }
    ans = max(ans, score);
}
void pick(int s) {
    if (s == 3)s++;
    if (s == 9) {
        play_game();
        return;
    }
    for (int i = 2; i <= 9; i++) {
        if (!picked[i]) {
            picked[i] = true;
            players[s] = i;
            pick(s + 1);
            picked[i] = false;
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    players[3] = 1;
    cin >> N;
    for (int j = 1; j <= N; j++) {
        for (int i = 1; i <= 9; i++)cin >> innings[i][j];
    }
    pick(0);
    cout << ans;
    return 0;
}