#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum(ll m) {
	ll s = 0;
	while (m > 0) {
		s += m % 10;
		m /= 10;
	}

	return s;
}

vector<int> digs(ll m) {
	vector<int> d;
	while (m > 0) {
		d.push_back(m % 10);
		m /= 10;
	}

	reverse(d.begin(), d.end());

	return d;
}

ll lpow(ll a, ll e) {
	ll res = a;
	for (ll i = 1; i < e; ++i) {
		res *= a;
	}

	return res;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, s;
		cin >> n >> s;

		vector<int> d = digs(n);
		ll m = n;
		ll ss = s;
		while (sum(m) > ss) {
			for (int i = 0; i < d.size(); ++i) {
				ss -= d[i];
				if (ss < 0) {
					m /= lpow(10, d.size() - i);
					++m;
					m *= lpow(10, d.size() - i);
					d = digs(m);
					break;
				}
			}

			ss = s;
		}

		cout << (m - n) << endl;
	}
	
	return 0;
}
