#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++)
    {
        int a,b;
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
}