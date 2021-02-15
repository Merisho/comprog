#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<ll> a(n);
	for (ll& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	ll ans = 0;
	ll ps = 0;
	for (int i = 0; i < n; ++i) {
		ans += i * a[i] - ps;
		ps += a[i];
	}

	cout << ans;
	
	return 0;
}
