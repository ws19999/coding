#include <iostream>
using namespace std;
struct node {
    int left, right;
    long long lazyval = 0, sums = 0;
};
node table[4000001];
int startpos = 1,N;
int a, b, c;
long long d;
void init() {
    while (N > startpos)startpos *= 2;
    for (int i = startpos; i < N + startpos; i++) {
        cin >> table[i].sums;
        table[i].left = i - startpos + 1;
        table[i].right = i - startpos + 1;
    }
    for (int i = N + startpos; i < 2 * startpos; i++) {
        table[i].sums = 0;
        table[i].left = i - startpos + 1;
        table[i].right = i - startpos + 1;
    }
    for (int i = startpos - 1; i >= 1; i--) {
        table[i].sums = table[i * 2].sums + table[i * 2 + 1].sums;
        table[i].left = table[i * 2].left;
        table[i].right = table[i * 2 + 1].right;
    }
}
void update(int num) {
    if (table[num].lazyval) {
        long long val = table[num].lazyval / 2;
        table[num * 2].sums += val;
        table[num * 2 + 1].sums += val;
        if (table[num * 2].left != table[num * 2].right) {
            table[num * 2].lazyval += val;
            table[num * 2 + 1].lazyval += val;
        }
        table[num].lazyval = 0;
    }
    if (table[num].left >= b && table[num].right <= c) {
        if (table[num].left != table[num].right) {
            table[num].lazyval += (table[num].right - table[num].left + 1) * d;
        }
        table[num].sums += (table[num].right - table[num].left + 1) * d;
        return;
    }
    if (table[num * 2].right >= b)update(num * 2);
    if (table[num * 2 + 1].left <= c)update(num * 2 + 1);
    table[num].sums = table[num * 2].sums + table[num * 2+1].sums;
}
long long dfs(int num) {
    long long ans = 0;
    if (table[num].lazyval) {
        long long val = table[num].lazyval / 2;
        if (table[num * 2].left != table[num * 2].right) {
            table[num * 2].lazyval += val;
            table[num * 2 + 1].lazyval += val;
        }
        table[num * 2].sums += val;
        table[num * 2 + 1].sums += val;
        table[num].lazyval = 0;
    }
    if (table[num].left >= b && table[num].right <= c)return table[num].sums;
    if (table[num * 2].right >= b)ans+= dfs(num * 2);
    if (table[num * 2 + 1].left <= c)ans += dfs(num * 2 + 1);
    return ans;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int M, K;
    cin >> N >> M >> K;
    init();
    for (int i = 0; i < M + K; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            cin >> d;
            update(1);
        }
        else cout << dfs(1) << "\n";
    }
    return 0;
}