#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> b1;
		vector<int> b2;
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;

			if (b == 1) {
				b1.push_back(a[i]);
			} else {
				b2.push_back(a[i]);
			}
		}

		sort(b1.begin(), b1.end(), greater<int>());
		sort(b2.begin(), b2.end(), greater<int>());

		int s = 0;
		int ans = 2 * b2.size();
		for (int i = 0; i < b2.size(); ++i) {
			s += b2[i];
		}

		int l = 0;
		int r = b2.size() - 1;

		while (l < b1.size() && r >= 0) {
			if (s < m) {
				s += b1[l];
				++l;
				++ans;
			} else if (s - b2[r] >= m) {
				s -= b2[r];
				--r;
				ans -= 2;
			} else if (s - b2[r] + b1[l] >= m) {
				s -= b2[r];
				--r;
				s += b1[l];
				++l;
				--ans;
			} else {
				break;
			}
		}

		cout << (s < m ? -1 : ans) << endl;
	}
	
	return 0;
}
