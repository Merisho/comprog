#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll x;
		cin >> x;

		ll a = cbrt(x);
		ll b = 1;
		bool ans = false;
		for (int i = 0; i < cbrt(x); ++i) {
			ll d = a * a * a + b * b * b;
			if (d > x) {
				--a;
			} else if (d < x) {
				++b;
			} else {
				ans = true;
				break;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
