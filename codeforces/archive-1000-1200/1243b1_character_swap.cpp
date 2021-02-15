#include <bits/stdc++.h>
using namespace std;

int main() {
	int K;
	cin >> K;

	for (int k = 0; k < K; ++k) {
		int n;
		cin >> n;

		string s, t;
		cin >> s >> t;

		vector<int> d;
		for (int i = 0; i < n; ++i) {
			if (s[i] != t[i]) {
				d.push_back(i);
			}

			if (d.size() > 2) {
				break;
			}
		}

		if (d.size() != 2) {
			cout << "No" << endl;
			continue;
		}

		int i = d[0];
		int j = d[1];
		if (s[i] == s[j] && t[i] == t[j]) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	