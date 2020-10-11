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
		for (int i = 0; i < n / 2 + n % 2; ++i) {
			for (int j = 0; j < m / 2 + m % 2; ++j) {
				ll t = mx[i][j];

				int x = m - j - 1;
				int y = n - i - 1;
				t += mx[y][j];
				t += mx[i][x];
				t += mx[y][x];

				ll md = t / 4LL;

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
