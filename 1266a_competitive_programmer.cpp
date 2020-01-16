#include <bits/stdc++.h>
using namespace std;

bool div60(string y) {
	int s = 0;
	bool zero = false;
	int even = 0;
	for (int i = 0; i < y.length(); ++i) {
		int yi = y[i] - '0';
		if (yi == 0 && !zero) {
			zero = true;
		} else if (yi % 2 == 0) {
			++even;
		}

		s += yi;
	}

	return s % 3 == 0 && zero && even > 0;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		string y;
		cin >> y;

		if (div60(y)) {
			cout << "red";
		} else {
			cout << "cyan";
		}

		cout << endl;
	}
	
	return 0;
}
	