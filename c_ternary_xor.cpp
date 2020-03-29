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

		
		string a = "1";
		string b = "1";
		for (int i = 1; i < n; ++i) {
			if (x[i] == '2') {
				if (a[i - 1] == '0') {
					a += '2';
					b += '0';
				} else if (b[i - 1] == '0') {
					a += '0';
					b += '2';
				} else {
					a += '1';
					b += '1';
				}
			} else if (x[i] == '1') {
				a += '1';
				b += '0';
			} else {
				a += '0';
				b += '0';
			}
		}

		cout << a << endl << b << endl;
	}
	
	return 0;
}
	