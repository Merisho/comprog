#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		set<int> s;
		int m = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			s.insert(a);
			m = max(m, a);
		}

		vector<int> k(1e5, 0);
		for (int si : s) {
			for (int sj : s) {
				if (sj == si) {
					continue;
				}

				++k[sj ^ si];
			}
		}

		int ans = -1;
		for (int i = 1; i < 100000; ++i) {
			if (k[i] == n) {
				ans = i;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	