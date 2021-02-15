#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> m(n);
	for (int& mi : m) {
		cin >> mi;
	}

	vector<int> a(n);
	a[n - 1] = m[n - 1];
	int mn = 1e9 + 1;
	for (int i = n - 2; i >= 0; --i) {
		if (m[i] > mn) {
			a[i] = mn;
		} else {
			a[i] = m[i];
		}

		mn = min(mn, m[i]);
	}

	for (int ai : a) {
		cout << ai << " ";
	}
	
	return 0;
}
	