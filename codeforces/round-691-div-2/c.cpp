#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int n, m;
	cin >> n >> m;

	ll a1;
	cin >> a1;

	ll g = 0;
	for (int i = 0; i < n - 1; ++i) {
		ll ai;
		cin >> ai;
		g = gcd(g, abs(ai - a1));
	}

	for (int i = 0; i < m; ++i) {
		ll b;
		cin >> b;

		cout << gcd(a1 + b, g) << " ";
	}
	
	return 0;
}
