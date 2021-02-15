#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	int b[30];
	for (int i = 0; i < 30; ++i) {
		b[i] = 0;
	}

	vector<int[30]> c(n);
	for (int i = 0; i < n; ++i) {
		int ai = a[i];

		int j = 29;
		while (ai != 0) {
			int r = ai % 2;
			if (r == 1) {
				++b[j];
			}

			c[i][j] = r;
			ai /= 2;
			--j;
		}
	}

	int k = -1;
	for (int i = 0; i < 30; ++i) {
		if (b[i] == 1) {
			k = i;
			break;
		}
	}

	int j = -1;
	if (k != -1) {
		for (int i = 0; i < n; ++i) {
			if (c[i][k] == 1) {
				j = i;
				break;
			}
		}
	}

	if (j != -1) {
		cout << a[j] << " ";
	}
	
	for (int i = 0; i < n; ++i) {
		if (i == j) {
			continue;
		}

		cout << a[i] << " ";
	}
	
	return 0;
}
	