#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n[3];
	cin >> n[0] >> n[1] >> n[2];

	vector<pair<ll, int>> a;
	ll s = 0;
	ll sn[3] = {0, 0, 0};
	for (int i = 0; i < n[0]; ++i) {
		ll ai;
		cin >> ai;

		a.push_back({ai, 0});
		s += ai;
	}
	sn[0] = s;

	for (int i = 0; i < n[1]; ++i) {
		ll ai;
		cin >> ai;

		a.push_back({ai, 1});
		s += ai;
	}
	sn[1] = s - sn[0];

	for (int i = 0; i < n[2]; ++i) {
		ll ai;
		cin >> ai;

		a.push_back({ai, 2});
		s += ai;
	}
	sn[2] = s - sn[0] - sn[1];

	sort(a.begin(), a.end());

	if (n[a[0].second] == 1) {
		s -= a[0].first * 2LL;
	} else if (n[a[1].second] == 1) {
		s -= a[1].first * 2LL;
	} else if (a[0].second != a[1].second) {
		s -= (a[0].first + a[1].first) * 2LL;
	} else {
		ll mn = min(sn[0], sn[1]);
		mn = min(mn, sn[2]);
		s -= mn * 2;
	}

	cout << s << endl;
	
	return 0;
}