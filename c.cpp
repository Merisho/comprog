#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		int mt[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> mt[i][j];
			}
		}

		int s = 0;
		for (int i = 0; i < (m + 1) / 2; ++i) {
			int o = 0;
			int z = 0;
			int r = 0;
			int c = i;
			while (r < n && c >= 0) {
				if (mt[r][c] == 1) {
					++o;
				} else {
					++z;
				}

				if (mt[n - 1 - c][m - 1 - r] == 1) {
					++o;
				} else {
					++z;
				}

				++r;
				--c;
			}

			s += min(o, z);
		}

		cout << s << endl;
	}
	
	return 0;
}
	