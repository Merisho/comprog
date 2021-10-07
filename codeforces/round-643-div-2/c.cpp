#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	ll ans = 0;
	ll y = c;
	while (y >= b) {
		for (ll x = a; x <= b; ++x) {
			ll s = y + x;
			if (s > d) {
				ans += d - c + 1;
			} else {
				ans += s - c + 1;
			}
		}

		--y;
	}

	cout << ans;
	
	return 0;
}
