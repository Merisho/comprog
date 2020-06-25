#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long a, b, c;
		cin >> a >> b >> c;

		long long f, s;
		if (a * b <= c) {
			f = 1;
			s = -1;
		} else if (a < c) {
			f = 1;
			s = b;
		} else if (c <= a) {
			f = -1;
			s = 1;
		}

		if (((s + b - 1) / b) * c == a) {
			s = 2;
		}

		cout << f << " " << s << endl;
	}
	
	return 0;
}
	