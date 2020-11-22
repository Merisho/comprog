#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		string a, b;
		cin >> a >> b;

		vector<int> ca(26, 0);
		for (int i = 0; i < a.length(); ++i) {
			++ca[a[i] - 'a'];
		}

		vector<int> cb(26, 0);
		for (int i = 0; i < b.length(); ++i) {
			++cb[b[i] - 'a'];
		}

		bool ok = true;
		for (int i = 0; i < 26; ++i) {
			int c = cb[i];
			if (ca[i] >= c) {
				ca[i] -= c;
				continue;
			} else {
				c -= ca[i];
				ca[i] = 0;
			}

			if (c % k != 0) {
				ok = false;
				break;
			}

			for (int j = i - 1; j >= 0 && c > 0; --j) {	
				if (ca[j] < c) {
					c -= ca[j] - (ca[j] % k);
					ca[j] %= k;
				} else {
					ca[j] -= c;
					c = 0;
				}
			}

			if (c > 0) {
				ok = false;
				break;
			}
		}

		cout << (ok ? "Yes" : "No") << endl;
	}
	
	return 0;
}
