#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<pair<char, ll>> a(n);
		for (pair<char, ll>& ai : a) {
			cin >> ai.second;
		}

		for (pair<char, ll>& ai : a) {
			cin >> ai.first;
		}

		sort(a.begin(), a.end(), [](auto a1, auto a2) {
			if (a1.first == a2.first) {
				return a1.second < a2.second;
			}

			return a1.first < a2.first;
		});

		bool ans = true;
		for (int i = 0; i < n; ++i) {
			if (a[i].first == 'B' && a[i].second < i + 1) {
				ans = false;
				break;
			}

			if (a[i].first == 'R' && a[i].second > i + 1) {
				ans = false;
				break;
			}
		}

		cout << (ans ? "YES" : "NO") << endl;
	}
	
	return 0;
}
