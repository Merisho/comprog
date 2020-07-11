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
	int t[2] = {0, 0};
	for (int i = 0; i < a.size() / 2; ++i) {
		++t[a[i]];
	}

	int d = max(t[0], t[1]) - min(t[0], t[1]);

	int k = 1;
	int mx = 0;
	for (int i = 0; i < a.size() - 1; ++i) {
		if (a[i] == a[i + 1]) {
			++k;
		} else {
			mx = max(mx, k);
			k = 1;
		}
	}

	mx = max(mx, k);

	return max(mx, d);
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
	