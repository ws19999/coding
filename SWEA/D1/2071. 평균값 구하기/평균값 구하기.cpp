#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        double ans = 0;
        for (int i = 0; i < 10; i++) {
            int num;
            cin >> num;
            ans += num;
        }
        ans/=10;
        cout << "#" << tc << " ";
        if (ans - int(ans) >= 0.5) {
            cout << int(ans) + 1;
        }
        else cout << int(ans);
        cout << "\n";
    }
    return 0;
}