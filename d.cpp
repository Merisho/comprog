#include <bits/stdc++.h>
using namespace std;

int n, m;
char mz[50][50];

bool escape(int start_r, int start_c) {
	vector<vector<bool>> v(n, vector<bool>(m, false));
	bool e = false;

	queue<pair<int, int>> q;
	q.push({start_r, start_c});
	while (!q.empty()) {
		pair<int, int> u = q.front();
		q.pop();

		int r = u.first;
		int c = u.second;
		if (r < 0 || r >= n || c < 0 || c >= m || mz[r][c] == '#' || v[r][c]) {
			continue;
		}

		v[r][c] = true;

		if (r == n - 1 && c == m - 1) {
			e = true;
			break;
		}

		q.push({r - 1, c});
		q.push({r + 1, c});
		q.push({r, c - 1});
		q.push({r, c + 1});
	}

	return e;
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

		for (pair<int, int> bi : b) {
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
		for (pair<int, int> gi : g) {
			if (!escape(gi.first, gi.second)) {
				ok = false;
				break;
			}
		}

		for (pair<int, int> bi : b) {
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
	