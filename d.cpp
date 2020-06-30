#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int subsequence(int m, int p) {
	int n = a.size();
	int j = 0;
	while (j < n && a[j] > m) ++j;

	int c = 0;
	if (j > 0) {
		++c;
	}

	for (int i = j; i < n; ++i) {
		if ((c + 1) % 2 == p && a[i] <= m) {
			++c;
		} else if ((c + 1) % 2 != p) {
			++c;
		}
	}

	return c;
}

int main() {
	int n, k;
	cin >> n >> k;

	a = vector<int>(n);
	for (int& ai : a) {
		cin >> ai;
	}

	int ans = 1e9;
	int l = 1;
	int r = 1e9 + 1;
	while (l <= r) {
		int m = l + (r - l) / 2;

		int c = subsequence(m, a[0] <= m ? 1 : 0);

		if (c >= k) {
			ans = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}

	cout << ans;
	
	return 0;
}
	