#include <bits/stdc++.h>
using namespace std;

int search(int a, int b, int l, int r) {
	while (l < r) {
		int m = l + (r - l) / 2;
		if (m + a <= b) {
			l = m + 1;
		} else if (m >= a + b) {
			r = m - 1;
		} else {
			return m;
		}
	}

	return l;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int x = search(a, d, a, b);
		int y = search(x, d, b, c);
		int z = search(x, y, c, d);

		cout << x << " " << y << " " << z << endl;
	}
	
	return 0;
}
	