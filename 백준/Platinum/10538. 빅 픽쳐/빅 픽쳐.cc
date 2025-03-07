#include <iostream>
#include <unordered_map>
#include <climits>
#define p LLONG_MAX;
#define Hash1 2017;  //세로
#define Hash2 2027; //가로
using namespace std;
char masterpiece[2000][2000];
char picture[2000][2000];
long long hashmap[2000][2000];
long long garohashmap[2000][2000];
long long serohashmap[2000][2000];
int main(void)
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int H, W, h, w, ans = 0;
	long long serohash = 0, garohash = 0, maphash = 0, picturehash = 0 ,serohashmax = 1, garohashmax = 1;
	cin >> h >> w >> H >> W;
	for (int i = 1; i < h; i++)
	{
		serohashmax *= Hash1;
		serohashmax %= p;
	}
	for (int i = 1; i < w; i++)
	{
		garohashmax *= Hash2;
		garohashmax %= p;
	}
	for (int i = 0; i < h; i++)
	{
		picturehash *= Hash1;
		garohash = 0;
		for (int j = 0; j < w; j++)
		{
			garohash *= Hash2;
			cin >> picture[i][j];
			if (picture[i][j] == 'o')garohash += 1;
			garohash %= p;
		}
		picturehash += garohash;
		picturehash %= p;
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> masterpiece[i][j];
		}
	}
	for (int i = 0; i < H; i++)
	{
		garohash = 0;
		for (int j = 0; j < w; j++)
		{
			garohash *= Hash2;
			if (masterpiece[i][j] == 'o')garohash += 1;
			garohash %= p;
		}
		garohashmap[i][0] = garohash;
		for (int j = 1; j <= W - w; j++)
		{
			if (masterpiece[i][j - 1] == 'o')garohash -= garohashmax;
			garohash *= Hash2;
			if (masterpiece[i][j + w - 1] == 'o')garohash += 1;
			garohash %= p;
			garohashmap[i][j] = garohash;
		}
	}
	for (int j = 0; j < W; j++)
	{
		serohash = 0;
		for (int i = 0; i < h; i++)
		{
			serohash *= Hash1;
			if (masterpiece[i][j] == 'o')serohash += 1;
			serohash %= p;
		}
		serohashmap[0][j] = serohash;
		for (int i = 1; i <= H - h; i++)
		{
			if (masterpiece[i - 1][j] == 'o')serohash -= serohashmax;
			serohash *= Hash1;
			if (masterpiece[i + h - 1][j] == 'o')serohash += 1;
			serohash %= p;
			serohashmap[i][j] = serohash;
		}
	}

	for (int i = 0; i < h; i++)
	{
		maphash *= Hash1;
		maphash += garohashmap[i][0];
		maphash %= p;
	}
	hashmap[0][0] = maphash;
	if (maphash == picturehash)ans++;
	for (int j = 1; j <= W - w; j++)
	{
		maphash -= garohashmax * serohashmap[0][j - 1];
		maphash *= Hash2;
		maphash += serohashmap[0][j + w - 1];
		maphash %= p;
		if (maphash == picturehash)ans++;
		hashmap[0][j] = maphash;
	}
	for (int i = 1; i <= H - h; i++)
	{
		maphash = hashmap[i - 1][0] - serohashmax * garohashmap[i - 1][0];
		maphash *= Hash1;
		maphash += garohashmap[i + h - 1][0];
		maphash %= p;
		if (maphash == picturehash)ans++;
		hashmap[i][0] = maphash;
		for (int j = 1; j <= W - w; j++)
		{
			maphash -= garohashmax * serohashmap[i][j - 1];
			maphash *= Hash2;
			maphash += serohashmap[i][j + w - 1];
			maphash %= p;
			if (maphash == picturehash)ans++;
			hashmap[i][j] = maphash;
		}
	}
	cout << ans;
	return 0;
}