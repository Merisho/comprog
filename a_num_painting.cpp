#include <iostream>
using namespace std;

int gcd(int, int);

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;

		if (gcd(a, b) == 1) {
			cout << "Finite";
		} else {
			cout << "Infinite";
		}

		cout << endl;
	}

	return 0;
}

int gcd(int a, int b) {
	return a == 0 ? b : gcd(b % a, a);
}
