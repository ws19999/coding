#include <iostream>
#include <climits>
using namespace std;
int table[100001];
struct segment
{
	int min, start, end;
};
segment segmenttree[450000];

int minn;
void findmin(int start, int end, int num)
{
	if (segmenttree[num].start >= start && segmenttree[num].end <= end)
	{
		minn = min(table[segmenttree[num].min], minn);
		return;
	}
	else if (segmenttree[num].end < start || segmenttree[num].start > end)
	{
		return;
	}
	else if (segmenttree[num].min >= start && segmenttree[num].min <= end)
	{
		minn = min(table[segmenttree[num].min], minn);
		return;
	}
	else
	{
		findmin(start, end, num * 2);
		findmin(start, end, num * 2 + 1);
	}
}
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	table[0] = INT_MAX;
		int n, m;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> table[i];
		}
		table[n + 1] = -INT_MAX;
		int k = 1;
		while (k < n)k *= 2;
		int s = 1;
		for (int i = k; i < k * 2; i++)
		{
			if (s <= n)
			{
				segmenttree[i].min = s;
				segmenttree[i].start = s;
				segmenttree[i].end = s;
			}
			else
			{
				segmenttree[i].min = n + 1;
				segmenttree[i].start = s;
				segmenttree[i].end = s;
			}
			s++;
		}
		int temp = k;
		while (temp > 1)
		{
			temp /= 2;
			for (int i = temp; i < temp * 2; i++)
			{
				if (table[segmenttree[i * 2].min] <= table[segmenttree[i * 2 + 1].min])segmenttree[i].min = segmenttree[i * 2].min;
				else segmenttree[i].min = segmenttree[i * 2 + 1].min;
				segmenttree[i].start = segmenttree[i * 2].start;
				segmenttree[i].end = segmenttree[i * 2 + 1].end;
			}
		}
		cin >> m;
		while (m--)
		{
			int quory;
			cin >> quory;
			if (quory == 1)
			{
				int i, v;
				cin >> i >> v;
				table[i] = v;
				temp = k + i-1;
				while (true)
				{
					temp /= 2;
					if (!temp)break;
					int ans;
					if (table[segmenttree[temp * 2].min] <= table[segmenttree[temp * 2 + 1].min]) ans = segmenttree[temp * 2].min;
					else ans = segmenttree[temp * 2 + 1].min;
					segmenttree[temp].min = ans;
				}
			}
			else if (quory == 2)
			{
				int i, j;
				cin >> i >> j;
				minn = INT_MAX;
				findmin(i, j, 1);
				cout << minn << "\n";
			}
		}
	return 0;
}