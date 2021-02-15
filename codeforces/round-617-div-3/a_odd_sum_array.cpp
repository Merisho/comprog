#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int k = 0;
		int s = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			s += a;

			if (a % 2 == 1) {
				++k;
			}
		}

		if (k == 0 || (k == n && s % 2 == 0)) {
			cout << "NO";
		} else {
			cout << "YES";
		}

		cout << endl;
	}
	
	return 0;
}
	