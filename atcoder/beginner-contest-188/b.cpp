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

	ll s = 0;
	for (int i = 0; i < n; ++i) {
		ll b;
		cin >> b;

		s += a[i] * b;
	}

	if (s == 0) {
		cout << "Yes";
	} else {
		cout << "No";
	}

	cout << endl;
	
	return 0;
}
