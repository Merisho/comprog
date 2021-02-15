#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, x;
		cin >> n >> x;

		ll s = 0;
		ll mx = 0;
		for (int i = 0; i < n; ++i) {
			ll a;
			cin >> a;

			s += a;
			mx += (a + x - 1) / x;
		}

		cout << ((s + x - 1) / x) << " " << mx << endl;
	}
	
	return 0;
}
