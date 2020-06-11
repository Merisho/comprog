#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;

		int x = min(a, b);
		int y = max(a, b);
		int ans = 0;
		if (x * 2 < y) {
			cout << x;
		} else {
			cout << ((x + y) / 3);
		}

		cout << endl;
	}
	
	return 0;
}
	