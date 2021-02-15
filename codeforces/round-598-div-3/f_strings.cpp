#include <iostream>
#include <vector>
using namespace std;

int main() {
	int q;
	cin >> q;
	for (int qi = 0; qi < q; ++qi) {
		int n;
		string s, t;
		cin >> n >> s >> t;

		vector<int> scount(26), tcount(26);
		for (int i = 0; i < n; ++i) {
			++scount[s[i] - 'a'];
			++tcount[t[i] - 'a'];
		}

		bool ok = true, moreThanOne = false;
		for (int i = 0; i < 26; ++i) {
			if (scount[i] != tcount[i]) {
				ok = false;
			}

			if (scount[i] > 1) {
				moreThanOne = true;
			}
		}

		if (!ok) {
			cout << "NO" << endl;
			continue;
		}

		if (moreThanOne) {
			cout << "YES" << endl;
			continue;
		}

		int inv_s = 0, inv_t = 0;
		for (int l = 0; l < n; ++l) {
			for (int r = 0; r < l; ++r) {
				inv_s += s[l] > s[r];
				inv_t += t[l] > t[r];
			}
		}

		if (inv_t % 2 == inv_s % 2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
