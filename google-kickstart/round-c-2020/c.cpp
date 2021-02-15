#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		int mx = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mx += abs(a[i]);
		}

		vector<int> cnt(2 * mx + 1, 0);
		int ps = 0;
		long long ans = 0;
		++cnt[mx];
		for (int i = 0; i < n; ++i) {
			ps += a[i];
			for (int j = 0; j * j <= mx + ps; ++j) {
				ans += cnt[mx + ps - j * j];
			}
			++cnt[mx + ps];
		}

		cout << "Case #" << t << ": " << ans << endl;
	}
	
	return 0;
}
	