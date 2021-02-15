#include <bits/stdc++.h>
using namespace std;

int n, m;
char mz[50][50];

int escape(char p) {
	vector<vector<bool>> v(n, vector<bool>(m, false));
	
	queue<pair<int, int>> q;
	q.push({n - 1, m - 1});
	int k = 0;
	while (!q.empty()) {
		pair<int, int> u = q.front();
		q.pop();
 
		int r = u.first;
		int c = u.second;
		if (r < 0 || r >= n || c < 0 || c >= m || mz[r][c] == '#' || v[r][c]) {
			continue;
		}
 
		v[r][c] = true;
 
		if (mz[r][c] == p) {
			++k;
		}
 
		q.push({r - 1, c});
		q.push({r + 1, c});
		q.push({r, c - 1});
		q.push({r, c + 1});
	}
 
	return k;
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

		pair<int, int> dirs[] = {
			{-1, 0},
			{1, 0},
			{0, -1},
			{0, 1}
		};
		for (const auto& bi : b) {
			int r = bi.first;
			int c = bi.second;

			for (int i = 0; i < 4; ++i) {
				int rr = r + dirs[i].first;
				int cc = c + dirs[i].second;
				if (rr >= 0 && cc >= 0 && rr < n && cc < m && mz[rr][cc] == '.') {
					mz[rr][cc] = '#';
				}
			}
		}

		if (escape('G') == g.size() && escape('B') == 0) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	