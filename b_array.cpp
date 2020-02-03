#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		int p = -1;
		for (int i = 0; i < n; ++i) {
			if (a[i] < i) {
				break;
			}

			p = i;
		}

		int s = n;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] < (n - i - 1)) {
				break;
			}

			s = i;
		}

		if (s <= p) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	