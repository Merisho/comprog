#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<vector<int>> p(101, vector<int>(n + 1, 0));
		int mx = 0;
		for (int i = 0; i < n; ++i) {
			int c;
			cin >> c;

			for (int j = 1; j <= 100; ++j) {
				p[j][i + 1] = p[j][i] + int(c == j);
				mx = max(mx, p[j][n]);
			}
		}

		if (k == 1) {
			cout << (n - mx) << endl;
			continue;
		}

		int ans = 1e9;
		for (int j = 1; j <= 100; ++j) {
			if (p[j][n] - p[j][0] == 0) {
				continue;
			}

			int d = 0;
			int prev = -1;
			for (int i = k; i <= n; ++i) {
				int curr = k - (p[j][i] - p[j][i - k]);
				
				if (curr <= prev) {
					++d;
					prev = -1;
					i = min(n, i + k - 1);
				} else {
					prev = curr;
				}
			}

			ans = min(ans, d);
		}

		cout << ans << endl;
	}
	
	return 0;
}
