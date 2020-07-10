#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int subsequence(int n, int m, int p) {
	int c = 0;
	for (int i = 0; i < n; ++i) {
		int cnr = (c + 1) % 2;
		if (cnr == p && a[i] <= m || cnr != p) {
			++c;
		}
	}

	return c;
}
 
int main() {
	int n, k;
	cin >> n >> k;
 
	a = vector<int>(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int ans = 1e9;
	int l = 1;
	int r = 1e9;
	while (l <= r) {
		int m = l + (r - l) / 2;

		int c = max(subsequence(n, m, 1), subsequence(n, m, 0));
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
