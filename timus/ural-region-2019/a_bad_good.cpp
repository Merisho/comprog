#include <iostream>
#include <cmath>
using namespace std;

unsigned int decode(unsigned int n);

int main() {
	string type;
	unsigned int n;
	cin >> type >> n;

	cout << decode(n);

	return 0;
}

unsigned int decode(unsigned int n) {
	int k = 3;
	unsigned int m = n;
	unsigned int res = 0;

	while (k >= 0) {
		res += (m % 256) * pow(256, k);
		m /= 256;
		k--;
	}

	return res;
}
