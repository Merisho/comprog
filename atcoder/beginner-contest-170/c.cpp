#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, n;
	cin >> x >> n;

	vector<bool> p(101, true);
	for (int i = 0; i < n; ++i) {
		int pi;
		cin >> pi;

		p[pi] = false;
	}

	int l = 0;
	for (int i = 1; i <= x; ++i) {
		if (p[i]) {
			l = i;
		}
	}

	int r = 101;
	for (int i = 100; i >= x; --i) {
		if (p[i]) {
			r = i;
		}
	}

	if (x - l <= r - x) {
		cout << l;
	} else {
		cout << r;
	}
	
	return 0;
}
	