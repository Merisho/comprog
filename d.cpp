#include <bits/stdc++.h>
using namespace std;

int n, m;
char mz[50][50];

bool v[50][50];
void clearVisited() {
	for (int i = 0; i < n; ++i) {
		memset(v[i], 0, m);
	}
}

bool escape(int r, int c) {
	if (r < 0 || r >= n || c < 0 || c >= m || mz[r][c] == '#' || v[r][c]) {
		return false;
	}
 
	if (r == n - 1 && c == m - 1) {
		return true;
	}
 
	v[r][c] = true;
 
	return escape(r - 1, c) || escape(r + 1, c) || escape(r, c - 1) || escape(r, c + 1);
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		cin >> n >> m;

		vector<pair<int, int>> b;
		vector<pair<int, int>> g;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> mz[i][j];

				if (mz[i][j] == 'B') {
					b.push_back({i, j});
				}

				if (mz[i][j] == 'G') {
					g.push_back({i, j});
				}
			}
		}

		for (const auto& bi : b) {
			int r = bi.first;
			int c = bi.second;

			if (r - 1 >= 0 && mz[r - 1][c] == '.') {
				mz[r - 1][c] = '#';
			}

			if (r + 1 < n && mz[r + 1][c] == '.') {
				mz[r + 1][c] = '#';
			}

			if (c - 1 >= 0 && mz[r][c - 1] == '.') {
				mz[r][c - 1] = '#';
			}

			if (c + 1 < m && mz[r][c + 1] == '.') {
				mz[r][c + 1] = '#';
			}
		}

		bool ok = true;
		for (const auto& gi : g) {
			clearVisited();
			if (!escape(gi.first, gi.second)) {
				ok = false;
				break;
			}
		}

		for (const auto& bi : b) {
			clearVisited();
			if (escape(bi.first, bi.second)) {
				ok = false;
				break;
			}
		}

		if (ok) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	