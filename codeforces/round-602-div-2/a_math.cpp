#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int ti = 0; ti < t; ++ti) {
		int n;
		cin >> n;

		int a = 0, b = 1e9 + 1;
		for (int i = 0; i < n; ++i) {
			int ai, bi;
			cin >> ai >> bi;

			a = max(a, ai);
			b = min(b, bi);
		}

		cout << max(a - b, 0) << endl;

	}
	
	return 0;
}
	