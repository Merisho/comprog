#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		string s;
		cin >> s;

		int n = s.length();

		vector<int> pm(n, 0);
		vector<int> pp(n, 0);
		
		if (s[0] == '+') {
			++pp[0];
		} else {
			++pm[0];
		}

		for (int i = 1; i < n; ++i) {
			pm[i] = pm[i - 1];
			pp[i] = pp[i - 1];

			if (s[i] == '+') {
				++pp[i];
			} else {
				++pm[i];
			}
		}

		ll sum = n;
		for (int i = 0; i < n; ++i) {
			sum += i + 2 - pm[i] + pp[i];

			if (i - pm[n - 1] + pp[n - 1] >= 0) {
				break;
			}
		}

		cout << sum << endl;
	}
	
	return 0;
}
	