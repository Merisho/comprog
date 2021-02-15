#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;

		if (a == b) {
			cout << 0 << endl;
			continue;
		}

		int d = b - a;
		if (d % 2 == 0) {
			cout << (d > 0 ? 2 : 1);
		} else {
			cout << (d > 0 ? 1 : 2);
		}

		cout << endl;
	}
	
	return 0;
}
	