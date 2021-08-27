#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> cnt(n, 0);
	int curr = n;
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;

		--u;
		--v;
		int t;
		if (u > v) {
			t = cnt[v];
			++cnt[v];
		} else {
			t = cnt[u];
			++cnt[u];
		}

		if (t == 0) {
			--curr;
		}
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int c, u, v;
		cin >> c;
		if (c == 3) {
			cout << curr << endl;
			continue;
		}

		cin >> u >> v;
		--u;
		--v;

		if (c == 1) {
			int t;
			if (u > v) {
				t = cnt[v];
				++cnt[v];
			} else {
				t = cnt[u];
				++cnt[u];
			}

			if (t == 0) {
				--curr;
			}
		} else {
			int t;
			if (u > v) {
				--cnt[v];
				t = cnt[v];
			} else {
				--cnt[u];
				t = cnt[u];
			}

			if (t == 0) {
				++curr;
			}
		}
	}
	
	return 0;
}
