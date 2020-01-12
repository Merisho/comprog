#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, m;
	cin >> n >> k >> m;
	
	int s = 0;
	for (int i = 0; i < n - 1; ++i) {
		int a;
		cin >> a;

		s += a;
	}

	int x = (m * n) - s;
	if (x <= k) {
		cout << max(x, 0);
	} else {
		cout << -1;
	}
	
	return 0;
}
	