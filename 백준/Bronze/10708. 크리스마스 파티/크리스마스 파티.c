#include <stdio.h>
int arr[101];
int people[102];
int main(void)
{
    int n;
    scanf("%d",&n);
    int m;
    int res;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        res=arr[i];
        int temp;
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&temp);
            if(arr[i]==temp) people[j]++;
            else
            {
                people[res]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",people[i]);
    }
}