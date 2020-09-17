#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	vector<vector<int>> g;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		g = vector<vector<int>>(n);
		for (int i = 0; i < m; ++i) {
			int x, y;
			cin >> x >> y;

			--x;
			--y;

			g[y].push_back(x);
		}

		vector<bool> closed(n, false);
		for (int i = 0; i < n; ++i) {
			if (closed[i]) {
				continue;
			}

			for (int c : g[i]) {
				if (closed[c]) {
					continue;
				}

				for (int cc : g[c]) {
					if (!closed[cc]) {
						closed[i] = true;
						break;
					}
				}
			}
		}

		int k = 0;
		for (bool c : closed) {
			if (c) {
				++k;
			}
		}
		cout << k << endl;
		for (int i = 0; i < n; ++i) {
			if (closed[i]) {
				cout << (i + 1) << " ";
			}
		}

		if (k > 0) {
			cout << endl;
		}
	}
	
	return 0;
}
