#include <bits/stdc++.h>
using namespace std;

int find(int s, vector<int>& closed) {
	int l = 0;
	int r = closed.size() - 1;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (closed[m] == s) {
			return m;
		}

		if (closed[m] > s) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}

	return -1;
}

int nearestLeft(int idx, vector<int>& closed) {
	for (int i = idx; i > 0; --i) {
		if (closed[i] - closed[i - 1] > 1) {
			return closed[i] - 1;
		}
	}

	return closed[0] > 1 ? closed[0] - 1 : -1;
}

int nearestRight(int idx, int n, vector<int>& closed) {
	int last = closed.size() - 1;
	for (int i = idx; i < last; ++i) {
		if (closed[i + 1] - closed[i] > 1) {
			return closed[i] + 1;
		}
	}

	return closed[last] < n ? closed[last] + 1 : -1;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, s, k;
		cin >> n >> s >> k;

		vector<int> closed(k);
		for (int& a : closed) {
			cin >> a;
		}

		sort(closed.begin(), closed.end());

		int idx = find(s, closed);
		if (idx == -1) {
			cout << 0;
		} else {
			int l = nearestLeft(idx, closed);
			int r = nearestRight(idx, n, closed);

			if (l == -1) {
				cout << r - s;
			} else if (r == -1) {
				cout << s - l;
			} else {
				cout << min(s - l, r - s);
			}
		}

		cout << endl;
	}
	
	return 0;
}
	