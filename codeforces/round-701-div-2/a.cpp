#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll a, b;
		cin >> a >> b;

		ll ans = 1e9;
		for (int i = 0; i < 100; ++i) {
			ll k = i;
			ll bb = b + i;
			if (bb == 1) {
				++bb;
				++k;
			}

			ll aa = a;
			while (aa > 0) {
				aa /= bb;
				++k;
			}

			ans = min(ans, k);
		}

		cout << ans << endl;
	}
	
	return 0;
}
