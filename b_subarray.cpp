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

		int k = sqrt(n);
		vector<pair<int, int>> b(k + 1);
		for (int i = 0; i < k + 1; ++i) {
			b[i].first = 1e9 + 1;
			b[i].second = -1;
		}

		vector<int> a(n);

		int c = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];

			if (i != 0 && i % k == 0) {
				++c;
			}

			b[c].first = min(b[c].first, a[i]);
			b[c].second = max(b[c].second, a[i]);
		}

		bool found = false;
		for (int i = 0; i < n; ++i) {
			for (int j = n - 1; j > i; --j) {
				pair<int, int> mnmx = minmax(a, b, k, i, j);

				if (mnmx.second - mnmx.first >= j - i + 1) {
					found = true;
					cout << "YES" << endl;
					cout << i + 1 << " " << j + 1;
					break;
				}
			}

			if (found) {
				break;
			}
		}

		if (!found) {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	