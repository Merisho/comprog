#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> m(1000001, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		++m[a[i]];
	}

	int k = 0;
	for (int i = 0; i < n; ++i) {
		int x = a[i];
		bool ok = m[x] < 2 && (x == 1 || m[1] == 0);
		for (int i = 2; i * i <= x; ++i) {
			if (x % i == 0) {
				if (m[i] > 0 || m[x / i] > 0) {
					ok = false;
					break;
				}
			}
		}

		if (ok) {
			++k;
		}
	}

	cout << k;
	
	return 0;
}
	