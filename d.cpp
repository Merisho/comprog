#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long f(ll a, ll b, ll x) {
	return a * x / b - a * (x / b);
}

int main() {
	ll a, b, n;
	cin >> a >> b >> n;
	ll x = min(n, b - 1);

	cout << f(a, b, x);

	return 0;
}
	