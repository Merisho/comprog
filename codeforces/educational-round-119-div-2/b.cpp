#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll h, w;
		cin >> w >> h;


		ll k;
		cin >> k;

		vector<ll> x1(k);
		for (ll& xi : x1) {
			cin >> xi;
		}

		cin >> k;
		
		vector<ll> x2(k);
		for (ll& xi : x2) {
			cin >> xi;
		}

		cin >> k;

		vector<ll> y1(k);
		for (ll& yi : y1) {
			cin >> yi;
		}

		cin >> k;

		vector<ll> y2(k);
		for (ll& yi : y2) {
			cin >> yi;
		}

		ll xs = max(x1[x1.size() - 1] - x1[0], x2[x2.size() - 1] - x2[0]);
		ll ys = max(y1[y1.size() - 1] - y1[0], y2[y2.size() - 1] - y2[0]);

		cout << max(xs * h, ys * w) << endl;
	}
	
	return 0;
}
