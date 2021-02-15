#include <bits/stdc++.h>
using namespace std;


bool eq(vector<int>& a, vector<int>& b) {
	if (a.size() != b.size()) {
		return false;
	}

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] != b[i]) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	cin >> n;

	vector<int> s(n);

	vector<int> p(n);
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
		s[i] = i + 1;
	}

	int px;
	int x = 1;
	do {
		if (eq(p, s)) {
			px = x;
			break;
		}
		++x;
	} while (next_permutation(s.begin(), s.end()));


	vector<int> q(n);
	for (int i = 0; i < n; ++i) {
		cin >> q[i];
		s[i] = i + 1;
	}

	int qx;
	x = 1;
	do {
		if (eq(q, s)) {
			qx = x;
			break;
		}
		++x;
	} while (next_permutation(s.begin(), s.end()));

	cout << abs(px - qx);
	
	return 0;
}
	