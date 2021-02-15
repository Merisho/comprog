#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	vector<ll> b(n);
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (n % 2 == 1) {
		ll l = a[n / 2];
		ll r = b[n / 2];
 
		ll s = r - l + 1;
		cout << s;
		return 0;
	}

	ll l1 = a[n / 2 - 1];
	ll r1 = b[n / 2 - 1];
	ll l2 = a[n / 2];
	ll r2 = b[n / 2];

	ll s = (r1 + r2) - (l1 + l2) + 1;
	cout << s;
	
	return 0;
}
	