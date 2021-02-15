#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	ll x;
	cin >> n >> x;

	x *= 100;

	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		ll v, p;
		cin >> v >> p;

		a[i] = v * p;
	}

	ll s = 0;
	int ans = -1;
	for (int i = 0; i < n; ++i) {
		s += a[i];
		if (s > x) {
			ans = i + 1;
			break;
		}
	}

	cout << ans;
	
	return 0;
}
