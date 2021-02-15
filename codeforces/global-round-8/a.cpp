#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b, n;
		cin >> a >> b >> n;

		int x = min(a, b);
		int y = max(a, b);
		int k = 0;
		while (y <= n) {
			int t = y;
			y += x;
			x = t;
			++k;
		}

		cout << k << endl;
	}
	
	return 0;
}
	