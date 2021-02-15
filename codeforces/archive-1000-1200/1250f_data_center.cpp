#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int p = 0;
	int s = sqrt(n);
	for (int i = 1; i <= s; ++i) {
		if (n % i == 0) {
			p = 2 * (i + n / i);
		}
	}

	cout << p;
	
	return 0;
}
	