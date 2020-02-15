#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int x, y, a, b;
		cin >> x >> y >> a >> b;

		int d = y - x;
		int v = a + b;

		if (d % v > 0) {
			cout << -1;
		} else {
			cout << (d / v);
		}

		cout << endl;
	}
	
	return 0;
}
	