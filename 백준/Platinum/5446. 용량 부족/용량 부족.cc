#include <iostream>
#include <vector>
using namespace std;
struct trie {
    bool keep,leaf;
    int cnt = 0, children[77] = { 0 };
    vector<int> sons;
};
trie nodes[40000];
int ans,ncnt;
void init(int num) {
    for (auto i : nodes[num].sons)nodes[num].children[i] = 0;
    nodes[num].sons.clear();
    nodes[num].keep = false;
    nodes[num].leaf = false;
}
void dfs(int num) {
    if (nodes[num].keep == false) {
        ans++;
        return;
    }
    if (nodes[num].leaf)ans++;
    for (auto i : nodes[num].sons)dfs(nodes[num].children[i]);
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        init(0);
        nodes[0].keep = true;
        ans = 0;
        ncnt = 1;
        int N1,N2;
        cin >> N1;
        for (int i = 0; i < N1; i++) {
            string str;
            cin >> str;
            int pos = 0;
            for (auto c : str) {
                if (!nodes[pos].children[c - 46]) {
                    nodes[pos].children[c - 46] = ncnt;
                    nodes[pos].sons.push_back(c - 46);
                    pos = ncnt++;
                    init(pos);
                }
                else pos = nodes[pos].children[c - 46];
            }
            nodes[pos].leaf = true;
        }
        cin >> N2;
        if (N2 == 0)nodes[0].keep = false;
        for (int i = 0; i < N2; i++) {
            string str;
            cin >> str;
            int pos = 0;
            for (auto c : str) {
                if (!nodes[pos].children[c - 46]) break;
                else {
                    pos = nodes[pos].children[c - 46];
                    nodes[pos].keep = true;
                }
            }
        }
        dfs(0);
        cout << ans << "\n";
    }
    return 0;
}