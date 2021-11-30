#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int o = 0;
		int z = n - 1;
		vector<int> zi;
		vector<int> oi;
		while (o < z) {
			while(s[o] == '0') ++o;
			while(s[z] == '1') --z;

			if (o < z) {
				zi.push_back(z + 1);
				oi.push_back(o + 1);
			}

			++o;
			--z;
		}

		if (zi.size() > 0) {
			cout << 1 << endl << (zi.size() + oi.size()) << " ";
			for (int o : oi) {
				cout << o << " ";
			}
			for(int i = zi.size() - 1; i >= 0; --i) {
				cout << zi[i] << " ";
			}
		} else {
			cout << 0;
		}

		cout << endl;
	}
	
	return 0;
}
