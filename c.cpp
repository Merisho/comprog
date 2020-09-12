#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> res;
void add(int start, int end, int step, int y) {
	for (int x = start; x < end; x += step) {
		res.push_back({x, y});
	}
}

int main() {
	int n;
	cin >> n;

	int m = 2 * n + 1;

	add(0, m, 1, 2);
	add(1, m, 2, 1);
	add(1, m, 2, 3);

	if (n % 2 == 0) {
		res.push_back({0, 1});
		res.push_back({m - 1, 1});
		add(3, m - 2, 2, 0);
		add(4, m - 2, 4, 0);
		add(1, m, 2, 4);
		add(2, m, 4, 4);
	} else {
		res.push_back({0, 1});
		res.push_back({m - 1, 3});
		add(3, m, 2, 0);
		add(4, m, 4, 0);
		add(1, m - 2, 2, 4);
		add(2, m - 2, 4, 4);
	}

	cout << res.size() << endl;
	for (pair<int, int> r : res) {
		cout << r.first << " " << r.second << endl;
	}
	
	return 0;
}
	