#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
	int q;
	cin >> q;

	for (int t = 0; t < q; ++t) {
		bool zeros[1000000] = { false };

		ll n, k;
		cin >> n >> k;

		string b;
		cin >> b;

		ll l = 0;
		for (ll i = 0; i < n; ++i) {
			if (b[i] == '1') {
				continue;
			}

			ll d = i - l;
			if (d > k) {
				zeros[i - k] = true;
				k = 0;
			}
			else {
				zeros[l] = true;
				k -= d;
				++l;
			}
		}

		for (ll i = 0; i < n; i++) {
			if (zeros[i]) {
				cout << '0';
			}
			else {
				cout << '1';
			}
		}

		cout << endl;
	}
}
