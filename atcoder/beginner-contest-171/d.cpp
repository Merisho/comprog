#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<ll> ac(1e5 + 1, 0);
	ll s = 0;
	for (int i = 0; i < n; ++i) {
		ll a;
		cin >> a;
		
		s += a;
		++ac[a];
	}

	int q;
	cin >> q;
	
	for (int i = 0; i < q; ++i) {
		ll b, c;
		cin >> b >> c;

		s -= (b * ac[b]);
		s += (c * ac[b]);
		ac[c] += ac[b];
		ac[b] = 0;

		cout << s << endl;
	}
	
	return 0;
}
	