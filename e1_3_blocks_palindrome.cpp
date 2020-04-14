#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<vector<int>> p(27, vector<int>(n + 1, 0));
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			for (int j = 1; j < 27; ++j) {
				p[j][i + 1] = p[j][i];
			}

			++p[a][i + 1];
		}

		int m = 0;
		for (int i = 1; i < 27; ++i) {
			for (int j = 1; j < 27; ++j) {
				int bf = -1;
				int bl = -1;
				int prev = 0;
				for (int k = 1; k <= n; ++k) {
					if (p[j][k] == 1 && bf < 0) {
						bf = k;
						bl = k;
						prev = 1;
					}

					if (p[j][k] > prev) {
						bl = k;
						prev = p[j][k];
					}
				}

				if (bf == -1) {
					continue;
				}

				int l = min(p[i][bf], p[i][n] - p[i][bl]) * 2 + p[j][bl];
				m = max(m, l);
			}
		}

		cout << m << endl;
	}
	
	return 0;
}
	