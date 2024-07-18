#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        int temp = 1;
        scanf("%d %d", &a, &b);
        if (a < b) { c = a; }
        else {
            c = b;
        }
        for (int j = c; j >= 1; j--)
        {
            if (a % j == 0 && b % j == 0)
            {
                temp = j;
                break;
            }
        }
        printf("%d\n", a / temp * b);

    }
}