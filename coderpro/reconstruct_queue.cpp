#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n = 6;
	vector<pair<int, int>> input = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
	
	sort(input.begin(), input.end(), [](const auto& l, const auto& r) {
		if (l.first == r.first) {
			return l.second < r.second;
		}

		return l.first > r.first;
	});

	vector<pair<int, int>> res;
	for (auto p : input) {
		res.insert(res.begin() + p.second, p);
	}
	
	for (int i = 0; i < res.size(); ++i) {
		cout << '{' << res[i].first << ' ' << res[i].second << "} ";
	}

	return 0;
}
