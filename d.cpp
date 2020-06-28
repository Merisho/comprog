#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> rd;
		int md = 0;
		int mc = 0;
		int mx = 0;
		map<int, int> count;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a % k == 0) {
				continue;
			}

			int d = k - (a % k);
			rd.push_back(d);

			++count[d];
			if (count[d] > mc) {
				md = d;
				mc = count[d];
			} else if (count[d] == mc && d > md) {
				md = d;
			}

			mx = max(mx, d);
		}

		if (rd.size() == 0) {
			cout << 0 << endl;
			continue;
		}

		int ans = md + (k * (mc - 1));
		ans = max(ans, mx) + 1;

		cout << ans << endl;
	}
	
	return 0;
}
	