#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<vector<int>> s(n, vector<int>(5));
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 5; ++j) {
				cin >> s[i][j];
			}
		}

		bool ok = false;
		for (int a = 0; a < 5; ++a) {
			for (int b = a + 1; b < 5; ++b) {
				int g[3] = {0, 0, 0};
				for (int i = 0; i < n; ++i) {
					if (s[i][a] == 1 && s[i][b] == 1) {
						g[2]++;
					} else if (s[i][a] == 1) {
						g[0]++;
					} else if (s[i][b] == 1) {
						g[1]++;
					}
				}

				int cnta = g[0];
				int cntb = g[1];
				int both = g[2];

				if (cnta > n / 2 || cntb > n / 2) {
					continue;
				}

				if (cnta == n / 2 && cntb == n / 2) {
					ok = true;
				} else if (n - cnta - cntb <= both) {
					ok = true;
				}
			}
		}

		if (ok) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
