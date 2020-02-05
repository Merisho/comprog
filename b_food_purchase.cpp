#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int s;
		cin >> s;

		int sum = 0;
		while (s >= 10) {
			int r = s % 10;
			sum += s - r;

			s = s / 10 + r;
		}

		sum += s;

		cout << sum << endl;
	}
	
	return 0;
}
	