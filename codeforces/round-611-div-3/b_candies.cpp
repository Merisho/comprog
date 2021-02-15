#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		int n, k;
		cin >> n >> k;

		int a = n / k;
		int d = n - (a * k);

		if (d == 0) {
			cout << n;
		} else {
			int m = min(d, k / 2);
			cout << a * k + m;
		}

		cout << endl;
	}
	
	return 0;
}
	