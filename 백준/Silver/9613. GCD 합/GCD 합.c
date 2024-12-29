#include <stdio.h>
int main(void)
{
	int t;
	int arr[105];
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		long long sum = 0;
		int a, b;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				a = arr[j];
				b = arr[k];
				while (a % b != 0 && b % a != 0)
				{
					if (a > b)a %= b;
					else b %= a;
				}
				if (a > b)sum += b;
				else sum += a;
			}
		}
		printf("%lld\n", sum);
	}
}