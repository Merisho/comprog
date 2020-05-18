#include <bits/stdc++.h>
using namespace std;

int n, m;
bool v[1000][1000];
char f[1000][1000];

void component(int r, int c) {
	if (r < 0 || r >= n || c < 0 || c >= m) {
		return;
	}

	if (f[r][c] == '.' || v[r][c]) {
		return;
	}

	v[r][c] = true;

	component(r - 1, c);
	component(r + 1, c);
	component(r, c - 1);
	component(r, c + 1);
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			char c;
			cin >> c;
			f[i][j] = c;

			v[i][j] = false;
		}
	}

	int wr = 0;
	for (int i = 0; i < n; ++i) {
		bool w = true;
		for (int j = 0; j < m; ++j) {
			if (f[i][j] == '#') {
				w = false;
				break;
			}
		}

		if (w) {
			++wr;
		}
	}

	int wc = 0;
	for (int i = 0; i < m; ++i) {
		bool w = true;
		for (int j = 0; j < n; ++j) {
			if (f[j][i] == '#') {
				w = false;
				break;
			}
		}

		if (w) {
			++wc;
		}
	}

	if (wr == n && wc == m) {
		cout << 0;
		return 0;
	}

	if (wr > 0 && wc == 0 || wc > 0 && wr == 0) {
		cout << -1;
		return 0;
	}

	bool ok = true;
	for (int i = 0; i < n && ok; ++i) {
		bool s = false;
		bool e = false;
		for (int j = 0; j < m; ++j) {
			if (f[i][j] == '#') {
				if (!s) {
					s = true;
				}

				if (e) {
					ok = false;
					break;
				}
			}

			if (f[i][j] == '.' && s) {
				e = true;
			}
		}
	}

	for (int i = 0; i < m && ok; ++i) {
		bool s = false;
		bool e = false;
		for (int j = 0; j < n; ++j) {
			if (f[j][i] == '#') {
				if (!s) {
					s = true;
				}

				if (e) {
					ok = false;
					break;
				}
			}

			if (f[j][i] == '.' && s) {
				e = true;
			}
		}
	}

	if (!ok) {
		cout << -1;
		return 0;
	}

	int k = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!v[i][j] && f[i][j] == '#') {
				++k;
				component(i, j);
			}
		}
	}

	cout << k;
	
	return 0;
}
	