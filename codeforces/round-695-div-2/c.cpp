#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(vector<ll>& a, vector<ll>& b, vector<ll>& c) {
	ll ans = accumulate(a.begin(), a.end(), 0LL);
	ll sb = accumulate(b.begin(), b.end(), 0LL) - b[0];
	ll sc = accumulate(c.begin(), c.end(), 0LL) - c[0];

	ans += max({ sb + sc - b[0] - c[0], sb + b[0] - sc - c[0], sc + c[0] - sb - b[0] });
	return ans;
}

int main() {
	int n[3];
	cin >> n[0] >> n[1] >> n[2];

	vector<vector<ll>> a(3);

	for (int i = 0; i < 3; ++i) {
		a[i].resize(n[i]);
		for (ll& ai : a[i]) {
			cin >> ai;
		}

		sort(a[i].begin(), a[i].end());
	}

	ll ans = f(a[0], a[1], a[2]);
	ans = max(ans, f(a[1], a[0], a[2]));
	ans = max(ans, f(a[2], a[0], a[1]));

	cout << ans << endl;
	
	return 0;
}