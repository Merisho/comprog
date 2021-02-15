#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, k;
	cin >> a >> b >> k;

	if (k > a) {
		k -= a;
		a = 0;
		b = b - min(b, k);
	} else {
		a -= k;
	}

	cout << a << " " << b;
	
	return 0;
}
	