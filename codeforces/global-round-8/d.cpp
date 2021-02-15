#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> c(20, 0);
	for (int& ai : a) {
		cin >> ai;

		int t = ai;
		int k = 0;
		while (t > 0) {
			c[k] += t % 2;
			t >>= 1;
			++k;
		}
	}

	ll s = 0;
	ll t = 1e9;
	while (t > 0) {
		t = 0;
		for (int i = 19; i >= 0; --i) {
			if (c[i] > 0) {
				t += 1LL<<i;
				--c[i];
			}
		}

		s += (t * t);
	}

	cout << s;
	
	return 0;
}
