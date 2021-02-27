#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll p, a, b, c;
		cin >> p >> a >> b >> c;

		ll ans = min(a * ((p + a - 1) / a) - p, b * ((p + b - 1) / b) - p);
		ans = min(ans, c * ((p + c - 1) / c) - p);

		cout << ans << endl;
	}
	
	return 0;
}
