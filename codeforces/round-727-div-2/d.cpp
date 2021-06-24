#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<pair<ll, ll>> c(n);
	ll as = 0;
	for (int i = 0; i < n; ++i) {
		ll a, b;
		cin >> a >> b;

		c[i] = {b, a};
		as += a;
	}

	sort(c.begin(), c.end());

	if (as < c[0].first) {
		cout << (2 * as);
		return 0;
	}

	int l = 0;
	int r = n - 1;
	ll k = 0;
	ll ans = 0;
	while (l <= r) {
		while (c[l].first - k > 0) {
			if (c[r].second > c[l].first - k) {
				ll d = c[l].first - k;
				ans += 2 * d;
				k += d;
				c[r].second -= d;
			} else {
				ans += 2 * c[r].second;
				k += c[r].second;
				c[r].second = 0;
				--r;
			}

			if (r < l) {
				break;
			}
		}

		if (c[l].first - k <= 0) {
			ans += c[l].second;
			k += c[l].second;
			++l;
		}
	}

	cout << ans;

	return 0;
}
