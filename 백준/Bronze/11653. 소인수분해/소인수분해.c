#include <stdio.h>
int main(void)
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n){
        i++;
        if(n%i==0)
        {
            printf("%d\n",i);
            n/=i;
            i=1;
        }
        else if(i==n)printf("%d",i);
    }
}