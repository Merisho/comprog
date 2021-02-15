#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		int a = max(n, m);
		int b = min(n, m);

		int ans = a / 2 * b;
		if (a % 2 == 1) {
			ans += (b + 1) / 2;
		}

		cout << ans << endl;
	}
	
	return 0;
}
	