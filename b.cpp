#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int o = 0;
		int e = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a % 2 == 0 && i % 2 == 1) {
				++e;
			} else if (a % 2 == 1 && i % 2 == 0) {
				++o;
			}
		}

		if (o == e) {
			cout << e;
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
	