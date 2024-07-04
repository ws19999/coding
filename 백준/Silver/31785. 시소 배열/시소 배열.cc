#include <iostream>
#include <deque>
using namespace std;
deque<int> fronts;
int fsize = 0,bsize=0,fsum=0,bsum=0;
deque<int> backs;
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int Q;
	cin >> Q;
	for (int q = 1; q <= Q; q++)
	{
		int d;
		cin >> d;
		if (d == 1)
		{
			int x;
			cin >> x;
			backs.push_back(x);
			bsum += x;
			bsize++;
			while (fsize+2 <= bsize)
			{
				fronts.push_back(backs.front());
				fsum += backs.front();
				bsum -= backs.front();
				backs.pop_front();
				fsize++;
				bsize--;
			}
		}
		else
		{
			if (fsum <= bsum)
			{
				cout << fsum << "\n";
				fronts.clear();
				fsum = 0;
				fsize = 0;
				while (fsize+2 <= bsize)
				{
					fronts.push_back(backs.front());
					fsum += backs.front();
					bsum -= backs.front();
					backs.pop_front();
					fsize++;
					bsize--;
				}
			}
			else
			{
				cout << bsum << "\n";
				backs.clear();
				bsum = 0;
				bsize = 0;
				while (fsize > bsize)
				{
					bsize++;
					fsize--;
					backs.push_front(fronts.back());
					fsum -= fronts.back();
					bsum += fronts.back();
					fronts.pop_back();
				}
			}
		}
	}
	for (auto i : fronts)cout << i << " ";
	for (auto i : backs)cout << i << " ";
	return 0;
}