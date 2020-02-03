#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, a, b;
		cin >> n >> a >> b;

		long long x = n / a;
		long long y = n / b;
		long long ra = n % a;
		long long rb = n % b;
		if ((a == b && n % a != 0) || (a != b && x == y && ra != rb)) {
			cout << "NO";
		} else {
			cout << "YES";
		}

		cout << endl;
	}
	
	return 0;
}
	