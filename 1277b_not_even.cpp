#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
		
		set<int> s;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a % 2 == 0 ) {
				s.insert(a);
			}
		}

		if (s.size() == 0) {
			cout << 0 << endl;
			continue;
		}

		int k = 0;
		while (s.size()) {
			++k;

			int m = *--s.end();
			s.erase(m);
			m /= 2;

			if (m % 2 == 0) {
				s.insert(m);
			}
		}

		cout << k << endl;
	}
	
	return 0;
}
	