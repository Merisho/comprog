#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	int s = 0;
	for (int i = 0; i < n; ++i) {
		int ai;
		cin >> ai;

		s += ai / 2;
		a[i] = ai;
	}

	for (int i = 0; i < n; ++i) {
		int b = a[i] / 2;
		if (s > 0) {
			if (a[i] % 2 != 0 && a[i] < 0) {
				--b;
				--s;
			}
		} else if (s < 0) {
			if (a[i] % 2 != 0 && a[i] > 0) {
				++b;
				++s;
			}
		}

		cout << b << endl;
	}
	
	return 0;
}
	