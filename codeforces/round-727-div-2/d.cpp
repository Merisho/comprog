#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<pair<ll, ll>> c(n);
	for (int i = 0; i < n; ++i) {
		ll a, b;
		cin >> a >> b;

		c[i] = {b, a};
	}

	sort(c.begin(), c.end());

	int l = 0;
	int r = n - 1;
	ll k = 0;
	ll p = 0;
	while (l < r) {
		if (c[l].first <= c[r].second) {
			p += 2 * c[l].first;
			k += c[l].first;
			k += c[l].second;
			p += c[l].second;

			c[r].second -= c[l].first;
			c[l].first = 0;

			++l;
			if (l != r) {
				c[l].first = max(0LL, c[l].first - k);
			}
		} else {
			p += 2 * c[r].second;
			k += c[r].second;
			c[l].first -= c[r].second;
			c[r].second = 0;

			--r;
			if (l != r) {
				c[r].first = max(0LL, c[r].first - k);
			}
		}
	}

	if (l == r) {
		ll b = c[l].first - k;
		ll a = c[l].second;
		if (b <= 0) {
			p += a;
		} else {
			if (b >= a) {
				p += 2 * a;
			} else {
				p += 2 * b + (a - b);
			}
		}
	}

	cout << p;
	
	return 0;
}
