#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n) {
	if (n == 1) {
		return 1;
	}

	if (n <= 0) {
		return 0;
	}

	ll k = 0;
	ll m = n;
	while (m > 1) {
		m /= 2;
		++k;
	}

	return k + 1 + f(n - (1<<k)) + f(1<<(k - 1));
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
	