#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> a, b, c;
	for (int i = 0; i < n; ++i) {
		int t, al, bl;
		cin >> t >> al >> bl;

		if (al == 0 && bl == 0) {
			continue;
		}

		if (al == 1 && bl == 1) {
			c.push_back(t);
		} else if (al == 1) {
			a.push_back(t);
		} else {
			b.push_back(t);
		}
	}

	if (c.size() + a.size() < k || c.size() + b.size() < k) {
		cout << -1;
		return 0;
	}

	a.push_back(1e9);
	b.push_back(1e9);
	c.push_back(1e9);

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());

	int s = 0;
	int ai = 0, bi = 0, ci = 0;
	int count = 0;
	while (count < k) {
		if (a[ai] + b[bi] <= c[ci]) {
			s += a[ai] + b[bi];
			++ai;
			++bi;
		} else {
			s += c[ci];
			++ci;
		}

		++count;
	}

	cout << s;
	
	return 0;
}
