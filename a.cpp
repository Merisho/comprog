#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m, k;
		cin >> n >> m >> k;

		int w = n / k;
		if (w >= m) {
			cout << m << endl;
			continue;
		}

		int ans = w - ((m - w + k - 2) / (k - 1));
		cout << ans << endl;
	}
	
	return 0;
}
	