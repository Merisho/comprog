#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		for (int i = 0; i < (n + 1) / 2; ++i) {
			int r = n - 1 - i;
			if (r <= i) {
				cout << a[i] << " ";
				continue;
			}

			cout << a[i] << " " << a[r] << " ";
		}

		cout << endl;
	}
	
	return 0;
}
