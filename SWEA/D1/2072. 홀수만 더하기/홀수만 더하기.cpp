#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int num;
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            cin >> num;
            if (num % 2 == 1)ans += num;
        }
        cout << "#" << tc << " " << ans << "\n";
    }
    return 0;
}