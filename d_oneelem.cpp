#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int m = 0;
	int l = 0;
	int k = 1;
	for (int i = 1; i < n; ++i) {
		if (a[i] > a[i - 1]) {
			++k;
		} else {
			++l;
		}

		if (l > 1) {
			m = max(m, k);
			l = 0;
			k = 1;
		}
	}

	cout << max(m, k);
	
	return 0;
}
	