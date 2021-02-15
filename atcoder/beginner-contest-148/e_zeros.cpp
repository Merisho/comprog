#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	if (n % 2 == 1) {
		cout << 0;
		return 0;
	}

	long long d = 10;
	long long s = 0;
	while (d <= n) {
		s += n / d;
		d *= 5;
	}

	cout << s;
	
	return 0;
}
	