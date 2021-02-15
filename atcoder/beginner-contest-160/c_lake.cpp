#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;

	int fa;
	cin >> fa;
	int pa = fa;

	vector<int> d(n);
	int m = 0;
	int mi = -1;
	for (int i = 1; i < n; ++i) {
		int a;
		cin >> a;

		int di = a - pa;
		d[i - 1] = di;
		
		if (di > m) {
			m = di;
			mi = i - 1;
		}

		pa = a;
	}

	d[n - 1] = k - pa + fa;
	if (d[n - 1] > m) {
		m = d[n - 1];
		mi = n - 1;
	}

	int s = 0;
	for (int i = 0; i < n; ++i) {
		if (i == mi) {
			continue;
		}

		s += d[i];
	}

	cout << s;

	return 0;
}
	