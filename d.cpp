#include <bits/stdc++.h>
using namespace std;

bool pred(long long A, long long s) {
	if (s < 0) {
		return A > s;
	}

	return A < s;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> m(2 * k + 1, 0);
		for (int i = 0; i < n / 2; ++i) {
			++m[a[i] + a[n - i - 1]];
		}

		vector<int> p(2 * k + 1, 0);
		for (int i = 0; i < n / 2; ++i) {
			int mn = min(a[i], a[n - i - 1]) + 1;
			int mx = max(a[i], a[n - i - 1]) + k;

			++p[mn];
			--p[mx + 1];
		}

		for (int i = 1; i <= 2 * k; ++i) {
			p[i] += p[i - 1];
		}

		int ans = 1e9;
		for (int x = 2; x <= 2 * k; ++x) {
			ans = min(ans, p[x] - m[x] + (n / 2 - p[x]) * 2);
		}

		cout << ans << endl;
	}
	
	return 0;
}
	