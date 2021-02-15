#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, q, k;
	cin >> n >> q >> k;

	vector<ll> a(n + 2, 0);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	a[n + 1] = k + 1;

	vector<ll> p(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		p[i] = p[i - 1] + max(0LL, a[i + 1] - a[i - 1] - 2);
	}

	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;

		ll ans = p[r] - p[l] + a[l + 1] - 2 - (a[r + 1] - a[r - 1] - 2) + (k + 1 - a[r - 1] - 2);

		cout << ans << endl;
	}

	return 0;
}
