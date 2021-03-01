#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, m, k, x;
	cin >> n >> m >> k >> x;

	ll w = n / k;
	ll h = m / k;

	ll ans = n * m;
	if (k <= n && k <= m) {
		int rn = n % k;
		int rm = m % k;
		ans = max(ans, w * h * x + rn * m + rm * n - (rn * rm));
	}
	
	cout << ans;
	
	return 0;
}
