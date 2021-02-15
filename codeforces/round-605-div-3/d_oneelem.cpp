#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int k = 0;
	pair<int, int> b[n];
	int start = 0;
	int prev = 0;
	int len = 0;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];

		if (a[i] <= prev) {
			b[k] = { start, i - 1 };
			len = max(len, i - start);

			++k;
			start = i;
		}

		prev = a[i];
	}

	b[k] = { start, n - 1 };
	len = max(len, n - start);

	if (k == 0) {
		cout << n;
		return 0;
	}

	for (int i = 0; i < k; ++i) {
		int penult = max(b[i].second - 1, b[i].first);
		int second = min(b[i + 1].first + 1, b[i + 1].second);
		if (a[penult] < a[b[i + 1].first] || a[b[i].second] < a[second]) {
			len = max(len, b[i + 1].second - b[i].first);
		}
	}

	cout << len;
	
	return 0;
}
	