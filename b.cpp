#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		for (int i = 0; i < q; ++i) {
			int l, r;
			cin >> l >> r;

			--l;
			--r;

			bool ok = false;
			int j = n - 1;
			while (j > r) {
				if (s[j] == s[r]) {
					ok = true;
					break;
				}
				--j;
			}

			j = 0;
			while (j < l) {
				if (s[j] == s[l]) {
					ok = true;
					break;
				}
				++j;
			}

			cout << (ok ? "YES" : "NO") << endl;
		}
	}
	
	return 0;
}
