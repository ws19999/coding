#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<3;i++)
    {
    __int128 sum=0;
    long long temp;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        sum+=temp;
    }
    if(sum>0)cout<<"+\n";
    else if(sum<0)cout<<"-\n";
    else cout<<"0\n";
    }
    return 0;
}