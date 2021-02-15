#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int h, w;
bool m[20][20];
pair<int, int> directions[4] = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

int find(int r, int c) {
	queue<pair<int, int>> q;
	q.push({ r, c });

	int d[20][20];
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			d[i][j] = -1;
		}
	}

	d[r][c] = 0;

	int mx = 0;
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i) {
			pair<int, int> dir = directions[i];
			int rd = p.first + dir.first;
			int cd = p.second + dir.second;
			int nd = d[p.first][p.second] + 1;

			if (rd >=0 && rd < h && cd >= 0 && cd < w && m[rd][cd] && (d[rd][cd] == -1 || d[rd][cd] > nd)) {
				q.push({ rd, cd });
				d[rd][cd] = d[p.first][p.second] + 1;
				mx = max(mx, d[rd][cd]);
			}
		}
	}

	return mx;
}

int main() {
	cin >> h >> w;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			m[i][j] = false;
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			char c;
			cin >> c;

			m[i][j] = c == '.';
		}
	}

	int ans = 0;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (m[i][j]) {
				ans = max(ans, find(i, j));
			}
		}
	}

	cout << ans;
	
	return 0;
}
	