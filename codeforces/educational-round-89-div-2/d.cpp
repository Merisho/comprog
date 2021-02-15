#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr ll MAX = 1e7;

int main() {
	vector<int> minDiv(MAX + 1, 1);
	for (ll k = 2; k <= MAX; ++k) {
		if (minDiv[k] == 1) {
			for (ll j = k; j * k <= MAX; ++j) {
				if (minDiv[j * k] == 1) {
					minDiv[j * k] = k;
				}
			}
		}
	}

	int n;
	cin >> n;

	vector<pair<int, int>> r;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		int b = a;
		while (minDiv[a] > 1 && b % minDiv[a] == 0) {
			b /= minDiv[a];
		}

		if (b == a || b == 1) {
			r.push_back({-1, -1});
		} else {
			r.push_back({minDiv[a], b});
		}
	}

	for (pair<int, int> p : r) {
		cout << p.first << " ";
	}

	cout << endl;

	for (pair<int, int> p : r) {
		cout << p.second << " ";
	}
	
	return 0;
}
