#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		ll n, k;
		cin >> n >> k;

		vector<ll> rd;
		ll md = 0;
		ll mc = 0;
		ll mx = 0;
		map<ll, ll> count;
		for (int i = 0; i < n; ++i) {
			ll a;
			cin >> a;

			if (a % k == 0) {
				continue;
			}

			ll d = k - (a % k);
			rd.push_back(d);

			++count[d];
			if (count[d] > mc) {
				md = d;
				mc = count[d];
			} else if (count[d] == mc && d > md) {
				md = d;
			}

			mx = max(mx, d);
		}

		if (rd.size() == 0) {
			cout << 0 << endl;
			continue;
		}

		ll ans = md + (k * (mc - 1));
		ans = max(ans, mx) + 1;

		cout << ans << endl;
	}
	
	return 0;
}
	