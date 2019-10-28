#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	cin >> n;

	int k = sqrt(n);
	while (n % k != 0) {
		k--;
	}

	cout << k + n / k - 2;

	return 0;
}
