#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		ll n, r;
		cin >> n >> r;

		ll ans;
		if (n <= r) {
			ans = n * (n - 1) / 2 + 1;
		} else {
			ans = r * (r + 1) / 2;
		}

		cout << ans << endl;
	}
	
	return 0;
}
	