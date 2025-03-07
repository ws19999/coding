#include <stdio.h>
void move(int n,int start,int to)
{
   printf("%d %d\n",start,to); 
}
void hanoi(int n,int start,int to,int via)
{
    if(n==1) move(1,start,to);
    else
    {
        hanoi(n-1,start,via,to);
        move(n,start,to);
        hanoi(n-1,via,to,start);
    }
}
int main(void)
{
   int n;
    scanf("%d",&n);
    int temp=n;
    int i=1;
    int count=1;
    while(temp>1)
    {
        i*=2;
        count+=i;
        temp--;
    }
    printf("%d\n",count);
   hanoi(n,1,3,2);
}