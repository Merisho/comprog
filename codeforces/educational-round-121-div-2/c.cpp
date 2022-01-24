#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> k(n);
		for (ll& ki : k) {
			cin >> ki;
		}

		vector<pair<ll, ll>> p;
		for (int i = 0; i < n; ++i) {
			ll h;
			cin >> h;

			p.push_back({k[i] - h, k[i]});
		}

		sort(p.begin(), p.end());

		ll t1 = p[0].first;
		ll t2 = p[0].second;
		ll ans = 0;
		for (int i = 1; i < n; ++i) {
			ll x1 = p[i].first;
			ll x2 = p[i].second;
			if (x2 > t1 && t2 > x1) {
				t1 = min(t1, x1);
				t2 = max(t2, x2);
			} else {
				ans += ((t2 - t1) * (t2 - t1 + 1LL)) / 2LL;
				t1 = x1;
				t2 = x2;
			}
		}

		ans += ((t2 - t1) * (t2 - t1 + 1LL)) / 2LL;

		cout << ans << endl;
	}
	
	return 0;
}
