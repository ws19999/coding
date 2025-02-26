#include <stdio.h>
#include <stdlib.h>
typedef struct num
{
	int pos;
	long long number;
	int count;
}Num;
int compare(Num *a,Num *b)
{
	if (a->number > b->number)return 1;
	else if (a->number < b->number)return -1;
	else return 0;
}
int comparenum(Num* a, Num* b)
{
	if (a->pos > b->pos)return 1;
	else if (a->pos < b->pos)return -1;
	else return 0;
}
Num arr[1000002];
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i].number);
		arr[i].pos = i;
	}
	qsort(arr, n, sizeof(arr[0]), compare);
	arr[0].count = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i].number != arr[i - 1].number)arr[i].count = arr[i - 1].count + 1;
		else arr[i].count = arr[i - 1].count;
	}
	qsort(arr, n, sizeof(arr[0]), comparenum);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i].count);
	}
}