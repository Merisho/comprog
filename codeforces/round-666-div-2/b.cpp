#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	ll lim = ll(1e15);
	ll ans = lim;
	ll c = 1;
	while (true) {
		ll v = 1;
		ll s = 0;
		for (int i = 0; i < n; ++i) {
			if (v > lim) {
				s = lim;
				break;
			}

			s += abs(a[i] - v);
			v *= c;
		}

		if (s == lim) {
			break;
		}

		ans = min(ans, s);
		++c;
	}

	cout << ans;
	
	return 0;
}
