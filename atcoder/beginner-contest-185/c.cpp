#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll l;
	cin >> l;

	ll ans = 1;
	ll k = 2;
	for (ll i = 1; i < 12; ++i) {
		ans *= (l - i);
		if (ans % k == 0 && k < 12) {
			ans /= k;
			++k;
		}
	}

	cout << ans;

	return 0;
}
