#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		map<ll, int> c;
		for (int i = 0; i < 2 * n; ++i) {
			ll di; 
			cin >> di;

			++c[di];
		}
		
		bool ok = true;
		vector<ll> d = {-1};
		for (auto pd : c) {
			if (pd.second != 2) {
				ok = false;
				break;
			}

			d.push_back(pd.first);
		}

		if (!ok) {
			cout << "NO" << endl;
			continue;
		}

		sort(d.begin(), d.end());

		ll s = 0;
		ll ap = -1;
		for (ll i = n; i > 0; --i) {
			ll b = d[i] - s;
			ll c = 2LL * i;
			ll a = b / c;
			if (b <= 0 || b % c != 0 || a == ap) {
				ok = false;
				break;
			}

			ap = a;

			s += 2 * a;
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
