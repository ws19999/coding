#include <iostream>
#include <algorithm>
using namespace std;
int N,table[5000],a,b,c;
long long answer = 3000000000;
void bsearch(int i,int j) {
	long long temp = table[i] + table[j];
	int s = i+1;
	int e = j-1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (abs(temp + table[mid]) < answer) {
			answer = abs(temp + table[mid]);
			a = i;
			c = j;
			b = mid;
		}
		if (abs(temp + table[mid - 1]) >= abs(temp + table[mid]) and abs(temp + table[mid + 1]) >= abs(temp + table[mid]))break;
		if (abs(temp + table[mid - 1]) < abs(temp + table[mid + 1]))e = mid - 1;
		else s = mid + 1;
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)cin >> table[i];
	sort(table, table + N);
	int minminus = 0;
	for (int i = 0; i < N; i++) {
		if (table[i]) {
			minminus = i - 1;
			break;
		}
	}
	for (int i = 0; i <= N - 3; i++) {
		int s = i + 2;
		if (i < minminus - 1)s = minminus;
		for (int j = s; j < N; j++) {
			long long tempmin = table[i] + table[j] + table[i+1];
			long long tempmax = table[i] + table[j] + table[j-1];
			if (tempmin < 0 and tempmax<0 and abs(tempmax)>answer)continue;
			else if (tempmin > 0 and tempmax > 0 and abs(tempmin) > answer)break;
			bsearch(i, j);
		}
	}
	cout << table[a] << " " << table[b] << " " << table[c];
	return 0;
}