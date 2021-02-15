#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	bool ans = true;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (a % 2 == 0) {
			if (a % 3 != 0 && a % 5 != 0) {
				ans = false;
				break;
			}
		}
	}

	cout << (ans ? "APPROVED" : "DENIED");
	
	return 0;
}
	