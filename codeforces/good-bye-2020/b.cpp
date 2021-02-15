#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int lim = 2 * (n + 1);

		vector<int> c(lim, 0);
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;

			++c[x];
		}

		for (int i = lim - 1; i >= 2; --i) {
			if (c[i - 1] > 0 && c[i] == 0) {
				++c[i];
				--c[i - 1];
			}
		}

		int ans = 0;
		for (int ci : c) {
			if (ci > 0) {
				++ans;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
