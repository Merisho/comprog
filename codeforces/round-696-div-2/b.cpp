#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	vector<ll> primes;
	for (ll i = 1; i <= 20021; ++i) {
		bool ok = true;
		for (ll j = 2; j <= sqrt(i); ++j) {
			if (i % j == 0) {
				ok = false;
			}
		}

		if (ok) {
			primes.push_back(i);
		}
	}

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll d;
		cin >> d;

		ll ans = 1;
		int k = 0;
		for (ll p : primes) {
			if (p - ans >= d) {
				ans *= p;
				++k;
			}

			if (k == 2) {
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
