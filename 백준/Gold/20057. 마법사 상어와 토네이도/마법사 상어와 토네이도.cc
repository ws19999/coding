#include <iostream>
using namespace std;
int n;
int sand[500][500];
int dx[] = { 0,1,0,-1 }, dy[] = {-1, 0, 1, 0};
int posx, posy,answer=0;
void tornado(int dir) {
	posx += dx[dir];
	posy += dy[dir];
	int originsand = sand[posx][posy];
	sand[posx][posy] = 0;
	int moved = 0;
	int a=2, b=0;
	if (dir % 2 == 0) {
		a = 0;
		b = 2;
	}
	moved += originsand * 5 / 100;
	if (posx + a * dx[dir] >= 0 and posx + a * dx[dir] < n and posy + b * dy[dir]>=0 and posy + b * dy[dir]<n) {
		sand[posx + a * dx[dir]][posy + b * dy[dir]] += originsand * 5 / 100;
		
	}
	else answer+= originsand * 5 / 100;
	a = 0;
	b = 2;
	if (dir % 2 == 0) {
		a = 2;
		b = 0;
	}
	moved += originsand * 2 / 100;
	if (posx + a * dy[dir] >= 0 and posx + a * dy[dir] < n and posy + b * dx[dir] >= 0 and posy + b * dx[dir] < n) {
		sand[posx + a * dy[dir]][posy + b * dx[dir]] += originsand * 2 / 100;
		
	}
	else answer += originsand * 2 / 100;
	a = 0;
	b = -2;
	if (dir % 2 == 0) {
		a = -2;
		b = 0;
	}
	moved += originsand * 2 / 100;
	if (posx + a * dy[dir] >= 0 and posx + a * dy[dir] < n and posy + b * dx[dir] >= 0 and posy + b * dx[dir] < n) {
		sand[posx + a * dy[dir]][posy + b * dx[dir]] += originsand * 2 / 100;
	}
	else answer += originsand * 2 / 100;
	if (dir % 2==1) {
		a = dx[dir];
		moved += originsand * 10 / 100;
		if (posx + a >= 0 and posx + a < n and posy + 1 >= 0 and posy + 1 < n) {
			sand[posx + a ][posy + 1] += originsand * 10 / 100;
			
		}
		else answer += originsand * 10 / 100;
		moved += originsand * 10 / 100;
		if (posx + a >= 0 and posx + a < n and posy - 1 >= 0 and posy - 1 < n) {
			sand[posx + a][posy - 1] += originsand * 10 / 100;
			
		}
		else answer += originsand * 10 / 100;
		a = -dx[dir];
		moved += originsand * 1 / 100;
		if (posx + a >= 0 and posx + a < n and posy + 1 >= 0 and posy + 1 < n) {
			sand[posx + a][posy + 1] += originsand * 1 / 100;
			
		}
		else answer += originsand * 1 / 100;
		moved += originsand * 1 / 100;
		if (posx + a >= 0 and posx + a < n and posy - 1 >= 0 and posy - 1 < n) {
			sand[posx + a][posy - 1] += originsand * 1 / 100;
			
		}
		else answer += originsand * 1 / 100;
	}
	else {
		b = -dy[dir];
		moved += originsand * 1 / 100;
		if (posx + 1 >= 0 and posx + 1 < n and posy + b >= 0 and posy + b < n) {
			sand[posx + 1][posy + b] += originsand * 1 / 100;
			
		}
		else answer += originsand * 1 / 100;
		moved += originsand * 1 / 100;
		if (posx - 1 >= 0 and posx -1 < n and posy +b >= 0 and posy +b < n) {
			sand[posx -1 ][posy +b] += originsand * 1 / 100;
			
		}
		else answer += originsand * 1 / 100;
		b = dy[dir];
		moved += originsand * 10 / 100;
		if (posx + 1 >= 0 and posx + 1 < n and posy + b >= 0 and posy + b < n) {
			sand[posx + 1][posy + b] += originsand * 10 / 100;
			
		}
		else answer += originsand * 10 / 100;
		moved += originsand * 10 / 100;
		if (posx - 1 >= 0 and posx - 1 < n and posy + b >= 0 and posy + b < n) {
			sand[posx - 1][posy + b] += originsand * 10 / 100;
			
		}
		else answer += originsand * 10 / 100;
	}
	a = 0;
	b = 1;
	if (dir % 2 == 0) {
		a = 1;
		b = 0;
	}
	moved += originsand * 7 / 100;
	if (posx + a * dy[dir] >= 0 and posx + a * dy[dir] < n and posy + b * dx[dir] >= 0 and posy + b * dx[dir] < n) {
		sand[posx + a * dy[dir]][posy + b * dx[dir]] += originsand * 7 / 100;
	}
	else answer += originsand * 7 / 100;
	a = 0;
	b = -1;
	if (dir % 2 == 0) {
		a = -1;
		b = 0;
	}
	moved += originsand * 7 / 100;
	if (posx + a * dy[dir] >= 0 and posx + a * dy[dir] < n and posy + b * dx[dir] >= 0 and posy + b * dx[dir] < n) {
		sand[posx + a * dy[dir]][posy + b * dx[dir]] += originsand * 7 / 100;
		
	}
	else answer += originsand * 7 / 100;
	if (posx + dx[dir] >= 0 and posx + dx[dir] < n and posy + dy[dir] >= 0 and posy + dy[dir] < n) {
		sand[posx + dx[dir]][posy + dy[dir]] += originsand - moved;
	}
	else answer += originsand - moved;
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	posx = n / 2;
	posy = n / 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)cin >> sand[i][j];
	}
	int dir = 0;
	for (int a = 1; a <= n - 1; a++) {
		for (int z = 0; z < 2; z++) {
			for (int y = 0; y < a; y++)tornado(dir);
			dir = (dir + 1) % 4;
		}
	}
	for (int a = 1; a <= n - 1; a++)tornado(dir);
	cout << answer;
}