#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, k;
		cin >> n >> k;
		
		string s;
		cin >> s;

		vector<int> p(n, 0);
		p[0] = s[0] - '0';
		for (int i = 1; i < n; ++i) {
			p[i] = p[i - 1] + (s[i] - '0');
		}

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				i += k;
				continue;
			}

			if (p[min(n - 1, i + k)] - p[i] == 0) {
				++ans;
				i += k;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	