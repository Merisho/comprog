#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, x;
		cin >> n >> x;

		vector<int> r(n + 1, 0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			r[i + 1] = (r[i] + a) % x;
		}

		int mx = -1;
		int l = 1e9;
		for (int i = 1; i <= n; ++i) {
			if (r[i] != 0) {
				mx = i;
				l = min(l, i);
			}

			mx = max(mx, i - l);
		}

		cout << mx << endl;
	}

	return 0;
}
	