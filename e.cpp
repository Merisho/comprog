#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_set(ll n, int b) {
	return ((n>>b) & 1) == 1;
}

ll sum(ll x, ll y = 0, ll z = 0) {
	ll m = max(x, y);
	m = max(m, z);
	
	int l = 0;
	ll s = 0;
	while ((1LL<<l) <= m) {
		if (is_set(x, l) || is_set(y, l) || is_set(z, l)) {
			s += (1LL<<l);
		}

		++l;
	}

	return s;
}

int main() {
	int n;
	cin >> n;

	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		ll x = a[i];
		ans = max(ans, sum(x));
		for (int j = i + 1; j < n; ++j) {
			ll y = a[j];
			ans = max(ans, sum(x, y));
			for (int k = j + 1; k < n; ++k) {
				ll z = a[k];
				ans = max(ans, sum(x, y, z));
			}
		}
	}

	cout << ans;
	
	return 0;
}
	