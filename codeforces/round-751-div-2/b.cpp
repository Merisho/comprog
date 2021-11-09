#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<vector<int>> s(n + 1, vector<int>(n));
		s[0] = a;
		for (int i = 1; i <= n; ++i) {
			vector<int> cc(n + 1, 0);
			for (int j = 0; j < n; ++j) {
				++cc[s[i - 1][j]];
			}

			vector<int> aa(n);
			for (int j = 0; j < n; ++j) {
				aa[j] = cc[s[i - 1][j]];
			}

			s[i] = aa;
		}

		int q;
		cin >> q;

		for (int i = 0; i < q; ++i) {
			int x, k;
			cin >> x >> k;

			--x;
			k = min(k, n);
			cout << s[k][x] << endl;
		}
	}
	
	return 0;
}
