#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int MOD = 1e9 + 7;

int main() {
	int n, x, pos;

	cin >> n >> x >> pos;

	int l = 0;
	int r = n;
	int lt = 0;
	int gt = 0;
	while (l < r) {
		int m = (l + r) / 2;
		if (m <= pos) {
			lt += (m < pos);
			l = m + 1;
		} else if (m > pos) {
			++gt;
			r = m;
		}
	}

	int t = lt + gt;
	ll ans = 1;
	ll sm = x - 1;
	while (lt > 0) {
		ans = (ans * sm) % MOD;
		--sm;
		--lt;
	}

	ll gr = n - x;
	while (gt > 0) {
		ans = (ans * gr) % MOD;
		--gr;
		--gt;
	}

	ll i = n - t - 1;
	while (i > 0) {
		ans = (ans * i) % MOD;
		--i;
	}

	cout << ans;
	
	return 0;
}
