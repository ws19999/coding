#include <iostream>
#include <algorithm>
using namespace std;
int 사대[100000];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M, N, L,ans=0;
    cin >> M >> N >> L;
    for (int i = 0; i < M; i++)cin >> 사대[i];
    sort(사대, 사대 + M);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        int lmax = x - L + y;
        int rmax = x + L - y;
        int l = 0, r = M - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (사대[m] >= lmax && 사대[m] <= rmax) {
                ans++;
                break;
            }
            else if (사대[m] < lmax)l = m + 1;
            else r = m - 1;
        }
    }
    cout << ans;
    return 0;
}