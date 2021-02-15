#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;

		int mn = min(a, b);
		int mx = max(a, b);
		if (mn <= (mx / 2)) {
			cout << (mx * mx);
		} else {
			cout << (mn * mn * 4);
		}

		cout << endl;
	}
	
	return 0;
}
	