#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s, t;
	cin >> s >> t;

	vector<int> a;
	for (int i = 0; i < n; ++i) {
		if (s[i] != t[i]) {
			a.push_back(s[i] - '0');
		}
	}

	int m = a.size();

	if (m % 2 == 1) {
		cout << -1;
		return 0;
	}

	if (m == 0) {
		cout << 0;
		return 0;
	}

	int k = 0;
	while (a[m - k - 1] == a[0]) {
		++k;
	}

	++k;
	int mx = 0;
	for (int i = 1; i < m; ++i) {
		if (a[i] == a[i - 1]) {
			++k;
		} else {
			mx = max(mx, k);
			k = 1;
		}
	}

	mx = max(mx, k);

	cout << mx;
	
	return 0;
}
	