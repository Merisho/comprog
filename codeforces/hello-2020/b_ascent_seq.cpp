#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> s[n];
	bool a[n];
	for (int i = 0; i < n; ++i) {
		int l;
		cin >> l;

		bool h = false;
		int si;
		cin >> si;
		s[i].push_back(si);
		for (int j = 1; j < l; ++j) {
			cin >> si;
			s[i].push_back(si);

			if (s[i][j - 1] < si) {
				h = true;
			}
		}

		a[i] = h;
	}

	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i]) {
			sum += 2 * n - 1;
			continue;
		}

		int l1 = s[i].size();

		if (l1 > 1) {
			++sum;
		}

		for (int j = i + 1; j < n; ++j) {
			if (a[j]) {
				continue;
			}
			
			int l2 = s[j].size();

			if (s[i][l1 - 1] < s[j][0]) {
				++sum;
			}

			if (s[j][l2 - 1] < s[i][0]) {
				++sum;
			}
		}
	}

	cout << sum;
	
	return 0;
}
	