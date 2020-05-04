#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	for (long long a = -500; a < 500; ++a) {
		for (long long b = -500; b < 500; ++b) {
			if (a * a * a * a * a - b * b * b * b * b == x) {
				cout << a << " " << b;
				return 0;
			}
		}
	}
	
	return 0;
}
	