#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9 + 1;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m, k;
		cin >> n >> m >> k;

		--m;

		k = min(k, m);

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		int r = 0;
		for (int l1 = 0; l1 <= k; ++l1) {
			int r1 = k - l1;
			int t = INF;
			
			for (int l2 = 0; l2 <= m - k; ++l2) {
				int r2 = m - k - l2;

				int x = max(a[l1 + l2], a[n - 1 - r1 - r2]);
				t = min(t, x);
			}

			r = max(r, t);
		}

		cout << r << endl;
	}
	
	return 0;
}
	