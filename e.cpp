#include <bits/stdc++.h>
using namespace std;

bool not_valid(vector<int>& a) {
	int types[2] = {0, 0};
	for (int i = 0; i < a.size(); ++i) {
		++types[a[i]];
	}

	return types[0] != types[1];
}

int count(vector<int>& a) {
	int k = 0;
	int mx = 0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == 0) {
			++k;
		} else {
			--k;
		}

		mx = max(mx, abs(k));
	}

	return mx;
}

int main() {
	int n;
	cin >> n;

	string s, t;
	cin >> s >> t;

	vector<int> a;
	for (int i = 0; i < n; ++i) {
		if (s[i] != t[i]) {
			a.push_back(s[i] - '0');
		}
	}

	if (not_valid(a)) {
		cout << -1;
		return 0;
	}

	int m = a.size();
	if (m == 0) {
		cout << 0;
		return 0;
	}

	int j = 0;
	while (a[m - 1] == a[j]) {
		++j;
	}

	rotate(a.begin(), a.begin() + j, a.end());

	int ans = count(a);
	cout << ans;
	
	return 0;
}
	