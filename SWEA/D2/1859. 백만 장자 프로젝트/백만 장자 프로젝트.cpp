#include <iostream>
using namespace std;
        int table[1000000];
        bool check[1000000];
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int N;

        cin >> N;
        for (int i = 0; i < N; i++)cin >> table[i];
        int temp = 0;
        for (int i = N - 1; i >= 0; i--) {
            if (temp < table[i]) {
                temp = table[i];
                check[i] = true;
            }
        }
        long long ans = 0;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            ans -= table[i];
            cnt++;
            if (check[i]) {
                ans += long(cnt) * long (table[i]);
                cnt = 0;
                check[i] = false;
            }
        }
        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}