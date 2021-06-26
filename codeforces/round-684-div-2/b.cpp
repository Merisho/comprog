#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		int nk = n * k;

		vector<ll> a(nk);
		for (ll& ai : a) {
			cin >> ai;
		}


		ll ans = 0;
		for (int i = 1; i <= k; ++i) {
			ans += a[nk - i * (1 + n / 2)];
		}

		cout << ans << endl;
	}
	
	return 0;
}
