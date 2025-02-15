#include <iostream>
#include <vector>
using namespace std;
struct node {
    int children[26] = { 0 };
    vector<int> child;
    int sz = 0;
    bool isleaf = false;
};
node table[1000001];
int ncnt,ans=0;
void init_node(int num) {
    for (auto i : table[num].child)table[num].children[i] = 0;
    table[num].child = {};
    table[num].sz = 0;
    table[num].isleaf = false;
}
void dfs(int num, int cnt) {
    for (auto i : table[num].child) {
        if (num == 0)dfs(table[num].children[i], cnt + 1);
        else if (table[num].isleaf)dfs(table[num].children[i], cnt + 1);
        else if (table[num].sz == 1)dfs(table[num].children[i], cnt);
        else dfs(table[num].children[i], cnt + 1);
    }
    if (table[num].isleaf)ans += cnt;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cout << fixed;
    cout.precision(2);
    int N;
    while (cin >> N) {
        ncnt = 1;
        init_node(0);
        int pos;
        for (int i = 0; i < N; i++) {
            pos = 0;
            string word;
            cin >> word;
            for (auto c : word) {
                if (!table[pos].children[c - 97]) {
                    table[pos].children[c - 97] = ncnt;
                    table[pos].child.push_back(c - 97);
                    table[pos].sz++;
                    pos = ncnt++;
                    init_node(pos);
                }
                else pos = table[pos].children[c - 97];
            }
            table[pos].isleaf = true;
        }
        ans = 0;
        dfs(0, 0);
        cout << double(ans) / N<<"\n";
    }
}