#include <stdio.h>
int main(void)
{
	int a, b,temp1,temp2;
	scanf("%d %d", &a, &b);
    temp1=a;
    temp2=b;
	while (a % b != 0 && b % a != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}
	if (a % b == 0)
	{
		printf("%d\n%d", b,(temp1*temp2)/b);
	}
	else printf("%d\n%d", a,(temp1*temp2)/a);
}