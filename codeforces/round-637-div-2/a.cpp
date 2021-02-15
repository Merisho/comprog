#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;

		int ln = n * (a - b);
		int rn = n * (a + b);
		int l = c - d;
		int r = c + d;

		if (min(r, rn) - max(l, ln) >= 0) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	