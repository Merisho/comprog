#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;

		int r = a % b;
		if (r == 0) {
			cout << 0;
		} else {
			cout << (b - r);
		}

		cout << endl;
	}
	
	return 0;
}
	