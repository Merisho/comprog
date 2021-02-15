#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		long long s = 0;
		int prev = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (prev == 0) {
				s += a;
				prev = a;
				continue;
			}

			if (prev / abs(prev) != a / abs(a)) {
				s += a;
				prev = a;
			} else {
				s -= prev;
				prev = max(prev, a);
				s += prev;
			}
		}

		cout << s << endl;
	}
	
	return 0;
}
	