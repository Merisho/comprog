#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		vector<int> a(n);
		vector<ll> o;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			a[i] %= 2;

			if (a[i] == 1) {
				o.push_back(i);
			}
		}

		if (abs(int(2 * o.size() - a.size())) > 1) {
			cout << -1 << endl;
			continue;
		}

		ll ans = 1e18;
		for (int f = 0; f < 2; ++f) {
			if (o.size() != (n + 1 - f) / 2) {
				continue;
			}

			ll cur = 0;
			for (int i = 0; i < o.size(); ++i) {
				cur += abs(f + i * 2 - o[i]);
			}

			ans = min(ans, cur);
		}


		cout << ans << endl;
	}
	
	return 0;
}
