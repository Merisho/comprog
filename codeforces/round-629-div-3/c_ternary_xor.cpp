#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		string x;
		cin >> x;

		string a, b;
		bool o = false;
		for (int i = 0; i < n; ++i) {
			if (o) {
				a += '0';
				b += x[i];
				continue;
			}
			
			if (x[i] == '1') {
				o = true;
				a += '1';
				b += '0';
			} else {
				int d = (x[i] - '0') / 2;
				a += (d + '0');
				b += (d + '0');
			}
		}

		cout << a << endl << b << endl;
	}
	
	return 0;
}
	