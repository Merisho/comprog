#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll x, y, k;
		cin >> x >> y >> k;

		ll s = k * y + k - 1;
		ll ans = k + (s + x - 2) / (x - 1);
		cout << ans << endl;
	}
	
	return 0;
}
