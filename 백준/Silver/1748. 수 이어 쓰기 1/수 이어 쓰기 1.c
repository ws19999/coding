#include <stdio.h>
int main(void)
{
    int n;
    int a = 1;
    int d = 9;
    int sum = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n < d) {
            sum += (n * a);
            break;
        }
        else
        {
            n -= d;
            sum += (d * a);
            d *= 10;
            a += 1;
        }
    }
    printf("%d", sum);
}