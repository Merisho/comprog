#include <bits/stdc++.h>
using namespace std;

pair<int, int> minmax(vector<int>& a, vector<pair<int, int>>& b, int k, int l, int r) {
	int mn = 1e9 + 1;
	int mx = -1;

	while (l <= r) {
		if (l % k == 0 && r - l < k && l != r) {
			mn = min(mn, b[l / k].first);
			mx = max(mx, b[l / k].second);
			l += k;
		} else {
			mn = min(mn, a[l]);
			mx = max(mx, a[l]);
			++l;
		}
	}

	return {mn, mx};
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		int l = -1;
		int r = -1;
		for (int i = 1; i < n; ++i) {
			if (abs(a[i + 1] - a[i]) >= 2) {
				l = i;
				r = i + 1;
				break;
			}
		}

		if (l == -1 && r == -1) {
			cout << "NO";
		} else {
			cout << "YES" << endl << l << " " << r;
		}

		cout << endl;
	}
	
	return 0;
}
	