#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
		
		if (n % 2 == 0) {
			cout << (n / 2 - 1);
		} else {
			cout << (n / 2);
		}

		cout << endl;
	}
	
	return 0;
}
	