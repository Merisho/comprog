#include <bits/stdc++.h>
using namespace std;

int h, w;
char m[20][20];
bool v[20][20];

int find(int x, int y, int tx, int ty) {
	if (x >= w || y >= h || x < 0 || y < 0 || m[y][x] == '#' || v[y][x]) {
		return 0;
	}

	if (x == tx && y == ty) {
		return 1;
	}

	v[y][x] = true;

	int f = min(find(x + 1, y, tx, ty), find(x, y + 1, tx, ty));
	f = min(f, find(x - 1, y, tx, ty));
	f = min(f, find(x, y - 1, tx, ty));

	return 1 + f;
}

void vis() {
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			v[i][j] = false;
		}
	}
}

int main() {
	cin >> h >> w;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cin >> m[i][j];
		}
	}

	int d = 0;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (m[i][j] == '#') {
				continue;
			}

			for (int ii = 0; ii < h; ++ii) {
				for (int jj = 0; jj < w; ++jj) {
					if (m[ii][jj] == '#') {
						continue;
					}

					d = max(d, find(j, i, jj, ii));
				}
			}
		}
	}

	cout << d;
	
	return 0;
}
	