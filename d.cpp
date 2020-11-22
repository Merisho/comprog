#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int d, k;
		cin >> d >> k;

		int a = ((d + (k - 1)) / k) * k;
		int h = sqrt(a * a / 2);
		while (h <= d) {
			a += k;
			h = sqrt(a * a / 2);
			if (h > d) {
				a -= k;
			}
		}

		cout << ((a / k) % 2 == 0 ? "Utkarsh" : "Ashish") << endl;
	}
	
	return 0;
}
