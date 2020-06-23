#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int a = (n + 1) / 2;
	int m = a + (a % 2) + 2;

	vector<pair<int, int>> ans;
	int y = 0;
	while (m > 0) {
		for (int i = 0; i < m; ++i) {
			ans.push_back({y + i, y});
			ans.push_back({y + i, -y - 1});
		}
		++y;
		m -= 2;
	}

	cout << ans.size() << endl;
	for (auto a : ans) {
		cout << a.first << " " << a.second << endl;
	}
	
	return 0;
}
	