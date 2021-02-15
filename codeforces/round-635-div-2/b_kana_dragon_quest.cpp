#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int x, n, m;
		cin >> x >> n >> m;

		while (x > 20 && n > 0) {
			x = x / 2 + 10;
			--n;
		}

		if (x <= 10 * m) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	