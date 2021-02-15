#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k1, k2;
		cin >> n >> k1 >> k2;

		int max1 = 0;
		for (int i = 0; i < k1; ++i) {
			int k;
			cin >> k;

			max1 = max(max1, k);
		}

		int max2 = 0;
		for (int i = 0; i < k2; ++i) {
			int k;
			cin >> k;

			max2 = max(max2, k);
		}

		if (max1 > max2) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	