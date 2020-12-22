#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll d, k;
		cin >> d >> k;

		ll sq = d * d;
		ll mx = k;
		for (ll x = k; x < d; x += k) {
			ll y = sqrt(sq - x * x);
			y = y - (y % k);
			mx = max(mx, x + y);
		}

		cout << ((mx / k) % 2 == 0 ? "Utkarsh" : "Ashish") << endl;
	}
	
	return 0;
}
