#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;

	vector<multiset<int>> all_kdg = vector<multiset<int>>(2 * 1e5);
	multiset<int> top;

	vector<int> inf_a(n);
	vector<int> inf_b(n);
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;

		--b;

		inf_a[i] = a;
		inf_b[i] = b;
		all_kdg[b].insert(a);
	}

	for (int i = 0; i < 2 * 1e5; ++i) {
		if (all_kdg[i].size() > 0) {
			top.insert(*all_kdg[i].rbegin());
		}
	}

	for (int i = 0; i < q; ++i) {
		int c, d;
		cin >> c >> d;

		--c;
		--d;

		int r = inf_a[c];
		auto& prev = all_kdg[inf_b[c]];

		top.erase(top.find(*prev.rbegin()));
		prev.erase(prev.find(r));
		if (prev.size() > 0) {
			top.insert(*prev.rbegin());
		}

		auto& next = all_kdg[d];
		if (next.size() > 0) {
			top.erase(top.find(*next.rbegin()));
		}
		next.insert(r);
		top.insert(*next.rbegin());
		
		inf_b[c] = d;

		int m = *top.begin();

		cout << m << endl;
	}
	
	return 0;
}
