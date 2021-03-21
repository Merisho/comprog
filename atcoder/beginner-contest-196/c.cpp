#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll d(ll a) {
	ll r = 0;
	while (a > 0) {
		++r;
		a /= 10;
	}

	return r;
}

int main() {
	ll n;
	cin >> n;

	for (ll i = 1; ; ++i) {
		if (i * (ll)pow(10LL, d(i)) + i > n) {
			cout << (i - 1);
			break;
		}
	}
	
	return 0;
}
