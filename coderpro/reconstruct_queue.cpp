#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n = 6;
	pair<int, int> input[n] = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
	
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		a[i] = i;
	}

	sort(a.begin(), a.end(), [&](int x, int y) {
		return input[x].first >= input[y].first && input[x].second < input[y].second;
	});

	forward_list<pair<int, int>> l;
	auto it = l.begin();
	for (int i = 0; i < n; ++i) {
		auto itt = it + 5;
		l.insert_after(it + input[a[i]].second, input[a[i]]);
	}

	for (auto i = l.begin(); i != l.end(); ++i) {
		cout << (*i).first << " " << (*i).second << endl;
	}

	return 0;
}
