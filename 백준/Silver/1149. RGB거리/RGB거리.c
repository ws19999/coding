#include <stdio.h>
int main(void)
{
    int arr[3][1002];
    int n,small;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&arr[0][i],&arr[1][i],&arr[2][i]);
        if(i>0)
        {
            if(arr[0][i-1]>arr[2][i-1])arr[1][i]=arr[2][i-1]+arr[1][i];
            else
            {
                arr[1][i]=arr[0][i-1]+arr[1][i];
            }
            if(arr[1][i-1]>arr[2][i-1])arr[0][i]=arr[2][i-1]+arr[0][i];
            else
            {
                arr[0][i]=arr[1][i-1]+arr[0][i];
            }
            if(arr[0][i-1]>arr[1][i-1])arr[2][i]=arr[1][i-1]+arr[2][i];
            else
            {
                arr[2][i]=arr[0][i-1]+arr[2][i];
            }
        }
        if(i==n-1)
        {
            for(int j=0;j<=2;j++)
            {
                if(j==0)small=arr[j][i];
                if(small>arr[j][i])small=arr[j][i];
            }
        }
    }
    printf("%d",small);
    
}