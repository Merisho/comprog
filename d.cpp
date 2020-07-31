#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n + 1);
	ll s = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		s += a[i];
	}

	if (n == 1) {
		cout << s;
		return 0;
	}

	vector<int> b;
	vector<ll> p(2 * (n + 2), 0);
	int k = 1;
	for (int i = 1; i <= n; i += 2) {
		b.push_back(a[i]);
		p[k] = p[k - 1] + a[i];
		++k;
	}

	for (int i = 2; i < n; i += 2) {
		b.push_back(a[i]);
		p[k] = p[k - 1] + a[i];
		++k;
	}

	int sz = b.size();
	for (int i = 0; i < sz; ++i) {
		b.push_back(b[i]);
		p[k] = p[k - 1] + b[i];
		++k;
	}

	ll mn = __LONG_LONG_MAX__;
	for (int i = 0; i <= n; ++i) {
		mn = min(mn, p[i + n / 2] - p[i]);
	}

	cout << (s - mn);
	
	return 0;
}
