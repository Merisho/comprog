#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;

	vector<array<ll, 3>> a(N);
	for (int i = 0; i < N; ++i) {
		ll t, l, r;
		cin >> t >> l >> r;

		a[i] = {t, l, r};
	}

	int ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			ll mx = max(a[i][1], a[j][1]);
			ll mn = min(a[i][2], a[j][2]);
			ll t1 = a[i][0];
			ll t2 = a[j][0];
			if (mx == mn) {
				if (t1 == 1) {
					if (t2 == 2 && a[i][2] == a[j][1]) {
						++ans;
					} else if (t2 == 3 && a[i][1] == a[j][2]) {
						++ans;
					}
				}

				if (t2 == 1) {
					if (t1 == 2 && a[i][1] == a[j][2]) {
						++ans;
					} else if (t1 == 3 && a[i][2] == a[j][1]) {
						++ans;
					}
				}
			}

			if (mx < mn) {
				++ans;
			}
		}
	}

	cout << ans;
	
	return 0;
}
