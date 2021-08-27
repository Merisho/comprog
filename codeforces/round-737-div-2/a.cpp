#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	cout << setprecision(9);
	ll s = 0;
	ll mx = -1e9;
	double ans;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		s = 0;
		mx = -1e9;
		for (int i = 0; i < n; ++i) {
			ll a;
			cin >> a;

			s += a;
			mx = max(mx, a);
		}

		ans = mx + double(s - mx) / double(n - 1);
		cout << ans << endl;
	}
	
	return 0;
}
