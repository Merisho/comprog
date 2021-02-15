#include <bits/stdc++.h>
using namespace std;

int operations(vector<int>& a) {
	int s = 0;
	int mx = 0;
	int mn = 1e9;

	for (int i = 0; i < a.size(); ++i) {
		s += a[i];
		mx = max(mx, s);
		mn = min(mn, s);
	}

	return mx - mn;
}

int main() {
	int n;
	cin >> n;

	string s, t;
	cin >> s >> t;

	vector<int> a;
	int x = 0;
	int y = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] != t[i]) {
			if (s[i] == '0') {
				++x;
				a.push_back(1);
			} else {
				++y;
				a.push_back(-1);
			}
		}
	}

	if (x != y) {
		cout << -1;
		return 0;
	}

	int m = a.size();
	if (m == 0) {
		cout << 0;
		return 0;
	}

	int ans = operations(a);
	cout << ans;
	
	return 0;
}
	