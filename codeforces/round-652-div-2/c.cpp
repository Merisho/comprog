#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		vector<int> w(k);
		for (int& wi : w) {
			cin >> wi;
		}

		sort(a.begin(), a.end());
		sort(w.begin(), w.end(), greater<int>());

		int l = 0;
		int r = n - 1;
		ll s = 0;

		int p = k - 1;
		while (w[p] == 1 || w[p] == 2) {
			if (w[p] == 1) {
				s += a[r] * 2;
				--r;
			} else {
				s += a[r] + a[r - 1];
				r -= 2;
			}

			--p;
		}

		for (int i = 0; i <= p; ++i) {
			s += a[r] + a[l];
			--r;
			l += w[i] - 1;
		}

		cout << s << endl;
	}
	
	return 0;
}
	