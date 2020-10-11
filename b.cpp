#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		ll mx[n][m];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> mx[i][j];
			}
		}

		ll s = 0;
		int mn = (n + 1) / 2;
		int mm = (m + 1) / 2;
		for (int i = 0; i < mn; ++i) {
			for (int j = 0; j < mm; ++j) {
				int x = m - j - 1;
				int y = n - i - 1;
				ll t[4] = { mx[i][j], mx[y][j], mx[i][x], mx[y][x] };
				sort(t, t + 4);

				ll md = t[1];
				s += abs(md - mx[i][j]);

				if (i != y) {
					s += abs(md - mx[y][j]);
				}

				if (j != x) {
					s += abs(md - mx[i][x]);
				}
				if (y != i && x != j) {
					s += abs(md - mx[y][x]);
				}
			}
		}

		cout << s << endl;
	}
	
	return 0;
}
