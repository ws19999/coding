#include <stdio.h>
int main(void)
{
    long long t;
    int n;
    int arr[12];
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4;i<=10;i++)
    {
        arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
    }
    scanf("%lld",&t);
    for(long long i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",arr[n]);
        
    }
}