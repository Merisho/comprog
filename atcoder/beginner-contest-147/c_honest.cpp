#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> t(n, vector<int>(n, -1));
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		for (int j = 0; j < a; ++j) {
			int x, y;
			cin >> x >> y;
			t[i][x - 1] = y;
		}
	}

	int m = pow(2, n);
	int mx = 0;
	for (int mask = 0; mask < m; ++mask) {
		int k = 0;
		bool c = false;
		for (int i = 0; i < n; ++i) {
			if ((mask & (1 << i)) == 0) {
				continue;
			}

			++k;
			for (int j = 0; j < n; ++j) {
				if (t[i][j] == -1) {
					continue;
				}

				if ((t[i][j] == 1 && (mask & (1 << j)) == 0) || (t[i][j] == 0 && (mask & (1 << j)) > 0)) {
					c = true;
					break;
				}
			}

			if (c) {
				break;
			}
		}

		if (!c) {
			mx = max(mx, k);
		}
	}

	cout << mx;
	
	return 0;
}
	