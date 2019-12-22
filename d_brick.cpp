#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int m = 1;
	int k = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == m) {
			++m;
		} else {
			++k;
		}
	}

	if (m == 1 || k == n) {
		cout << -1;
	} else {
		cout << k;
	}
	
	return 0;
}
	