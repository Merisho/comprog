#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	n *= 2;
	set<ll> c;
	for (ll i = 1; i * i <= n ; ++i) {
		if (n % i != 0 || (i % 2) == (n / i) % 2) {
			continue;
		}

		c.insert(i);
		c.insert(n / i);
	}

	cout << c.size();
	
	return 0;
}
