#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int x;
	cin >> x;

	int y = x;
	while (!prime(y)) {
		++y;
	}

	cout << y;
	
	return 0;
}
	