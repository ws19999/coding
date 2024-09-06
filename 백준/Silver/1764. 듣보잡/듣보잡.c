#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char listen[500005][22];
char see[500005][22];
char listensee[500005][22];
int compare(const void* _a, const void* _b)
{
	char* a = (char*)_a;
	char* b = (char*)_b;
	return strcmp(a, b);
}
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", listen[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%s", see[i]);
	}
	qsort(see, m, sizeof(listensee[0]),compare);
	qsort(listen, n, sizeof(listensee[0]),compare);
	int k = 0,i=0,j=0;
	while (i < n && j < m) {
		if (strcmp(listen[i], see[j]) == 0)
		{
			strcpy(listensee[k], listen[i]);
			k++;
			i++;
			j++;
		}
		else if (strcmp(listen[i], see[j]) > 0)j++;
		else i++;
	}
	printf("%d\n", k);
	for (int i = 0; i < k; i++)
	{
		printf("%s\n", listensee[i]);
	}
}