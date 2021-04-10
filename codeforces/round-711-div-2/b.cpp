#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, W;
		cin >> n >> W;

		vector<int> b(20, 0);
		ll sw = 0;
		for (int i = 0; i < n; ++i) {
			int w;
			cin >> w;

			sw += w;

			int k = 0;
			while (w > 0) {
				b[k] += w % 2;
				w /= 2;
				++k;
			}
		}

		vector<int> 

		cout << min((sw + W - 1) / W, ll(mx + s)) << endl;
	}
	
	return 0;
}