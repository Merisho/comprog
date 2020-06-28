#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int x, y, n;
		cin >> x >> y >> n;

		int r = n % x;
		if (r == y) {
			cout << n;
		} else if (r > y) {
			cout << (n - r + y);
		} else {
			cout << (n - x + y - r);
		}

		cout << endl;
	}
	
	return 0;
}
	