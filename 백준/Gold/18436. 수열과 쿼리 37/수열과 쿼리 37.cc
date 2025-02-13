#include <iostream>
using namespace std;
struct tree{
    int l,r,even=0,odd=0;
};
tree seg[400000];
int pos=1,N,l,r,ans=0,d;
void init(){
    while(pos<N)pos*=2;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        if(a%2==1)seg[pos+i].odd=1;
        else seg[pos+i].even=1;
        seg[pos+i].l=seg[pos+i].r=i+1;
    }
    for(int i=pos+N;i<pos*2;i++){
        seg[i].l=seg[i].r=i-pos+1;
        seg[i].even=seg[i].odd=0;
    }
    for(int i=pos-1;i>0;i--){
        seg[i].even=seg[i*2].even+seg[i*2+1].even;
        seg[i].odd=seg[i*2].odd+seg[i*2+1].odd;
        seg[i].l=seg[i*2].l;
        seg[i].r=seg[i*2+1].r;
    }
}
void dfs(int num){
    if(seg[num].l>=l && seg[num].r<=r){
        if(d%2)ans+=seg[num].odd;
        else ans+=seg[num].even;
        return;
    }
    if(seg[num*2].r>=l)dfs(num*2);
    if(seg[num*2+1].l<=r)dfs(num*2+1);
}
void query(int M){
    for(int i=0;i<M;i++){
        cin>>d;
        if(d==1){
            cin>>l>>r;
            if(r%2==0){
                seg[pos+l-1].even=1;
                seg[pos+l-1].odd=0;
            }
            else{
                seg[pos+l-1].odd=1;
                seg[pos+l-1].even=0;
            }
            int tmp=pos+l-1;
            while (tmp>1)
            {
                tmp/=2;
                seg[tmp].even=seg[tmp*2].even+seg[tmp*2+1].even;
                seg[tmp].odd=seg[tmp*2].odd+seg[tmp*2+1].odd;
            }
        }
        else if(d==2){
            cin>>l>>r;
            ans=0;
            dfs(1);
            cout<<ans<<"\n";
        }
        else{
            cin>>l>>r;
            ans=0;
            dfs(1);
            cout<<ans<<"\n";
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>N;
    init();
    int M;
    cin>>M;
    query(M);
    return 0;
}