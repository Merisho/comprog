#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9 + 1;

int h, w;
int a[81][81], b[81][81];
int u = 0;

int find(int i, int j) {
	if (i > h || j > w) {
		return INF;
	}

	int m = min(find(i + 1, j), find(i, j + 1));
	int r = min(abs(u + a[i][j] - b[i][j]), abs(u + b[i][j] - a[i][j]));
	u = r;
	if (m != INF) {
		u += m;
	}

	return r;
}

int main() {
	cin >> h >> w;

	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= w; ++j) {
			int ai;
			cin >> ai;
			a[i][j] = ai;
		}
	}

	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= w; ++j) {
			int bi;
			cin >> bi;
			b[i][j] = bi;
		}
	}

	find(1, 1);

	cout << u;
	
	return 0;
}
	