#include <bits/stdc++.h>
using namespace std;

bool not_valid(vector<int>& a) {
	int types[2] = {0, 0};
	for (int i = 0; i < a.size(); ++i) {
		++types[a[i]];
	}

	return types[0] != types[1];
}

int compress(vector<int>& a) {
	int k = 0;
	map<int, bool> m;
	vector<int> c;
	while (a.size() > 0) {
		m.clear();
		c.clear();
		for (int i = 0; i < a.size(); ++i) {
			int ni = (i + 1) % a.size();
			if (a[i] != a[ni]) {
				m[i] = true;
			}
		}

		for (int i = 0; i < a.size(); ++i) {
			if (!m[i]) {
				c.push_back(a[i]);
			}
		}

		a = c;
		++k;
	}

	return k;
}

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

	if (not_valid(a)) {
		cout << -1;
		return 0;
	}

	int m = a.size();
	if (m == 0) {
		cout << 0;
		return 0;
	}

	int j = 0;
	while (a[m - 1] == a[j]) {
		++j;
	}

	rotate(a.begin(), a.begin() + j, a.end());

	int ans = compress(a);
	cout << ans;
	
	return 0;
}
	