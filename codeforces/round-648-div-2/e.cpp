#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
 
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
 
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		ll x = a[i];
		ans = max(ans, x);
		for (int j = i + 1; j < n; ++j) {
			ll y = a[j];
			ans = max(ans, x|y);
			for (int k = j + 1; k < n; ++k) {
				ll z = a[k];
				ans = max(ans, x|y|z);
			}
		}
	}
 
	cout << ans;
	
	return 0;
}