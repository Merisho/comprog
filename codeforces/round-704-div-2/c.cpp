#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;

	string s, t;
	cin >> s >> t;

	vector<int> l(n);
	for (int i = 0, j = 0; i < n && j < m; ++i) {
		if (s[i] == t[j]) {
			l[j] = i;
			++j;
		}
	}

	vector<int> r(n);
	for (int i = n - 1, j = m - 1; i >= 0 && j >= 0; --i) {
		if (s[i] == t[j]) {
			r[j] = i;
			--j;
		}
	}

	int ans = 0;
	for (int i = 0; i < m - 1; ++i) {
		ans = max(ans, r[i + 1] - l[i]);
	}

	cout << ans;
	
	return 0;
}
