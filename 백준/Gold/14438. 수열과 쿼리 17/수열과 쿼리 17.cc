#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>
using namespace std;
struct node {
    int minval, left, right;
};
struct node table[400000];
int dfs(int i, int j, int num) {
    int val = 1000000000;
    if (table[num].left >= i && table[num].right <= j)return table[num].minval;
    if (j > table[num * 2].right) {
        val = min(val, dfs(i, j, num * 2 + 1));
    }
    if (i < table[num * 2 + 1].left) {
        val = min(val, dfs(i, j, num * 2));
    }
    return val;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    int pos = 1;
    while (pos < N)pos *= 2;
    for (int i = pos; i < pos + N; i++) {
        cin >> table[i].minval;
        table[i].left = i-pos+1;
        table[i].right = i-pos+1;
    }
    for (int i = pos + N; i < pos * 2; i++) {
        table[i].minval = 1000000001;
        table[i].left = i-pos+1;
        table[i].right = i-pos+1;
    }
    for (int p = pos / 2; p >= 1; p /= 2) {
        for (int i = p; i < p * 2; i++) {
            table[i].minval = min(table[i * 2].minval, table[i * 2 + 1].minval);
            table[i].left = table[i * 2].left;
            table[i].right = table[i * 2 + 1].right;
        }
    }
    int M;
    cin >> M;
    for (int query = 1; query <= M; query++) {
        int q;
        cin >> q;
        if (q == 1) {
            int i, v;
            cin >> i >> v;
            i = pos + i - 1;
            table[i].minval = v;
            while (i >= 2) {
                table[i / 2].minval = min(table[i/2*2].minval, table[i/2*2+1].minval);
                i /= 2;
            }
        }
        else if (q == 2) {
            int i, j;
            cin >> i >> j;
            cout<<dfs(i,j,1)<<"\n";
        }
    }
    return 0;
}