#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	vector<int> a(6);
	for (int i = 0; i < 6; ++i) {
		cin >> a[i];
	}

	int n;
	cin >> n;

	vector<int> b;
	map<int, bool> u;
	for (int i = 0; i < n; ++i) {
		int bi;
		cin >> bi;

		if (!u[bi]) {
			b.push_back(bi);
			u[bi] = true;
		}
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int mx = b[b.size() - 1] - a[5];

	int ans = 1e9;
	for (int i = 0; i < 6; ++i) {
		int d = b[0] - a[i];
		if (d <= mx) {
			ans = min(ans, mx - d);
		}
	}
	
	cout << ans;
	
	return 0;
}
