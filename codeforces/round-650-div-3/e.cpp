#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> c(26, 0);
		for (int i = 0; i < n; ++i) {
			char s;
			cin >> s;
			++c[s - 'a'];
		}

		sort(c.begin(), c.end());

		int ans = 1;
		for (int m = 1; m <= n; ++m) {
			vector<int> p(m);
			for (int i = 0; i < m; ++i) {
				p[i] = (i + k) % m;
			}

			vector<int> cc = c;
			vector<bool> v(m, false);
			int ci = 25;
			bool ok = true;
			for (int i = 0; i < m; ++i) {
				int l = 0;
				int j = i;
				while (!v[j]) {
					v[j] = true;
					++l;
					j = p[j];
				}

				while (ci >= 0 && cc[ci] < l) {
					--ci;
				}

				if (ci < 0) {
					ok = false;
					break;
				}

				cc[ci] -= l;
			}

			if (ok) {
				ans = m;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
