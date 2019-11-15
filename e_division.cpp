#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

constexpr int MAX = 1e9 + 1;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	vector<pair<int, int>> b(n);
	for (int i = 0; i < n; ++i) {
		b[i] = pair<int, int>(i, a[i]);
	}

	sort(b.begin(), b.end(), [&](pair<int, int> l, pair<int, int> r) {
		return l.second < r.second;
	});

	vector<int> dp(n + 1);
	vector<int> p(n + 1);
	for (int i = 1; i <= n; ++i) {
		dp[i] = MAX;
		p[i] = -1;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 3; j < 6 && i + j <= n; ++j) {
			int diff = b[i + j - 1].second - b[i].second;
			if (diff + dp[i] < dp[i + j]) {
				p[i + j] = i;
				dp[i + j] = diff + dp[i];
			}
		}
	}

	int cnt = n;
	int curr = 0;
	vector<int> t(n);
	while (cnt != 0) {
		for (int i = cnt - 1; i >= p[cnt]; --i) {
			t[b[i].first] = curr;
		}

		curr++;
		cnt = p[cnt];
	}

	cout << dp[n] << " " << curr << endl;
	for (int ti : t) {
		cout << ti + 1 << " ";
	}

	return 0;
}
