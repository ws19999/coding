#include <iostream>
using namespace std;
struct node {
    int father=-1, lleap, rleap;
};
node nodes[100001];
bool checked[100001];
bool ended = false;
int cnt=0,N;
int traverse(int num) {
    int moves = 0;
    int l = nodes[num].lleap;
    int r = nodes[num].rleap;
    if (l>=1)moves += traverse(l) + 1;
    if (!checked[num]) {
        checked[num] = true;
        cnt++;
        if (cnt == N) {
            ended = true;
        }
    }
    if (r >= 1)moves += traverse(r) + 1;
    if (ended)return moves;
    else return moves + 1;
}
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        nodes[a].lleap=b;
        nodes[a].rleap=c;
        if(b!=-1)nodes[b].father = a;
        if(c!=-1)nodes[c].father = a;
    }
    cout<<traverse(1);
    return 0;
}