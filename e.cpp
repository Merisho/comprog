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

			int ci = 25;
			bool ok = true;
			for (int i = 0; i < m; ++i) {
				int l = 1;
				int j = p[i];
				set<int> s;
				s.insert(i);
				while (j != i) {
					++l;
					j = p[j];
					if (s.find(j) != s.end()) {
						l = 0;
						break;
					}
				}

				if (l == 0) {
					continue;
				}

				while (ci >= 0 && c[ci] < l) {
					--ci;
				}

				if (ci < 0) {
					ok = false;
					break;
				}

				c[ci] -= l;
			}

			if (ok) {
				ans = m;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
