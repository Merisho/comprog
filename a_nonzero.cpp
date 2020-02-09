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

			if (a == 0) {
				++k;
				s += 1;
			} else {
				s += a;
			}
		}

		if (s == 0) {
			++k;
		}

		cout << k << endl;
	}
	
	return 0;
}
	