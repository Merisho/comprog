#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n) {
	if (n <= 0) {
		return 0;
	}

	ll k = 0;
	ll m = n;
	while (m > 1) {
		m /= 2;
		++k;
	}

	return (1LL<<(k + 1)) - 1LL + f(n - (1LL<<k));
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		ll n;
		cin >> n;

		ll ans = f(n);
		cout << ans << endl;
	}
	
	return 0;
}
	