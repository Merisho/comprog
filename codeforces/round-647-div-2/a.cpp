#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		ll a, b;
		cin >> a >> b;

		ll x = min(a, b);
		ll y = max(a, b);

		int k = 0;
		while (x < y) {
			if (x * 8 <= y) {
				x *= 8;
			} else if (x * 4 <= y) {
				x *= 4;
			} else {
				x *= 2;
			}

			++k;
		}

		if (x > y) {
			cout << -1;
		} else {
			cout << k;
		}

		cout << endl;
	}
	
	return 0;
}
	