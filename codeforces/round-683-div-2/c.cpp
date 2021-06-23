#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, W;
		cin >> n >> W;

		ll h = (W + 1) / 2;
		vector<int> ans;
		vector<pair<ll, int>> w(n);
		for (int i = 0; i < n; ++i) {
			ll wi;
			cin >> wi;

			w[i] = {wi, i};
			if (ans.size() == 0 && wi >= h && wi <= W) {
				ans.push_back(i + 1);
			}
		}

		if (ans.size() == 1) {
			cout << 1 << endl << ans[0] << endl;
			continue;
		}

		sort(w.begin(), w.end());

		ll c = 0;
		for (int i = n - 1; i >= 0; --i) {
			ll nc = c + w[i].first;
			if (nc <= W) {
				c = nc;
				ans.push_back(w[i].second + 1);
			}
		}

		if (c >= h) {
			cout << ans.size() << endl;
			for (int a : ans) {
				cout << a << " ";
			}
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
