#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;

	vector<pair<double, double>> a(N);
	for (int i = 0; i < N; ++i) {
		double t, l, r;
		cin >> t >> l >> r;

		if (t == 2) {
			r -= 0.5;
		} else if (t == 3) {
			l += 0.5;
		} else if (t == 4) {
			l += 0.5;
			r -= 0.5;
		}

		a[i] = {l, r};
	}

	int ans = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i + 1; j < N; ++j) {
			if (max(a[i].first, a[j].first) <= min(a[i].second, a[j].second)) {
				++ans;
			}
		}
	}

	cout << ans;
	
	return 0;
}
