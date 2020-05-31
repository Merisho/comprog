#include <bits/stdc++.h>
using namespace std;

constexpr long double MAX = 1e18;

int main() {
	int n;
	cin >> n;

	vector<long double> a(n);
	for (long double& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	long double p = 1ULL;
	bool ok = true;
	for (int i = 0; i < n; ++i) {
		p *= a[i];
		if (p > MAX) {
			p = -1;
			break;
		}
	}

	if (p == -1) {
		cout << p;
	} else {
		cout << (unsigned long long)p;
	}

	return 0;
}
	