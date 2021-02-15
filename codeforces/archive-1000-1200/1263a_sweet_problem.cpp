#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int r, g, b;
		cin >> r >> g >> b;

		int c[3] = {r, g, b};
		sort(c, c + 3);

		if (c[2] <= c[1] + c[0]) {
			cout << (c[2] + c[1] + c[0]) / 2;
		} else {
			cout << c[1] + c[0];
		}

		cout << endl;
	}
	
	return 0;
}
	