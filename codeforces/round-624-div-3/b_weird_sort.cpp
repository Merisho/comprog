#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		map<int, bool> mp;
		for (int i = 0; i < m; ++i) {
			int p;
			cin >> p;

			mp[p - 1] = true;
		}

		bool ans = true;
		for (int i = 0; i < n - 1; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (a[i] > a[j]) {
					for (int k = i; k < j; ++k) {
						if (!mp[k]) {
							ans = false;
							break;
						}
					}
				}
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
	