#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int k;
	cin >> k;

	int s = 0;
	for (int a = 1; a <= k; ++a) {
		for (int b = 1; b <= k; ++b) {
			for (int c = 1; c <= k; ++c) {
				s += gcd(gcd(a, b), c);
			}
		}
	}

	cout << s;
	
	return 0;
}
	