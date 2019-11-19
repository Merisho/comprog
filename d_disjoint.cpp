#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long gcd(long long, long long);

int main() {
	long long a, b;
	cin >> a >> b;

	long long g = gcd(a, b);

	long long count = 1;
	long long p = 2;
	while (g >= p * p) {
		if (g % p == 0) {
			++count;
		}

		while (g % p == 0) {
			g /= p;
		}

		++p;
	}

	if (g != 1) {
		++count;
	}

	cout << count;
}

long long gcd(long long a, long long b) {
	return a == 0 ? b : gcd(b % a, a);
}
