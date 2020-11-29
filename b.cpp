#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, x;
	cin >> n >> x;

	for (int i = 0; i < n; ++i) {
		char c;
		cin >> c;

		if (c == 'o') {
			++x;
		} else {
			x = max(0, x - 1);
		}
	}

	cout << x;
	
	return 0;
}
