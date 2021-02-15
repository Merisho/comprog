#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, k;
		cin >> n >> k;

		ll a = (n + k - 1) / k;
		k *= a;

		ll ans = (k + n - 1) / n;

		cout << ans << endl;
	}
	
	return 0;
}
