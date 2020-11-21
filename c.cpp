#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	ll m = n;

	int s = 0;
	vector<int> c(3, 0);
	while (m != 0) {
		int d = m % 10;
		s += d;
		++c[d % 3];
		m /= 10;
	}

	int r = s % 3;

	if (r == 0) {
		cout << 0;
		return 0;
	}

	if (c[r] >= 1 && n > 9) {
		cout << 1;
		return 0;
	}

	if (c[3 - r] >= 2 && n > 99) {
		cout << 2;
		return 0;
	}

	cout << -1;
	
	return 0;
}
