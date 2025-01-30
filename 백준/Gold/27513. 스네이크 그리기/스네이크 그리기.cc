#include <iostream>
using namespace std;
int n, m;
void go(int a) {
    for (int i = 1; i <= a; i++) {
        if (i % 2 == 1) {
            for (int j = 2; j <= m; j++) {
                cout << i << " " << j << "\n";
            }
        }
        else {
            for (int j = m; j >= 2; j--) {
                cout << i << " " << j<<"\n";
            }
        }
    }
}
void go_2() {
    for (int j = m; j > 1; j -= 2) {
        cout << n - 1 << " " << j << "\n";
        cout << n << " " << j << "\n";
        cout << n << " " << j - 1 << "\n";
        cout << n - 1 << " " << j - 1 << "\n";
    }
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    if (n % 2 == 1 && m % 2 == 1)cout << n * m - 1;
    else cout << n * m;
    cout << "\n";
    if (n % 2 == 1) {
        go(n - 2);
        go_2();
        for (int i = n - 2 + (m % 2); i >= 1; i--) {
            cout << i << " " << 1 << "\n";
        }
    }
    else {
        go(n);
        for (int i = n; i >= 1; i--) {
            cout << i << " " << 1 << "\n";
        }
    }
    return 0;
}
