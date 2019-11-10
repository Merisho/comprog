#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (auto& ai : a) {
			cin >> ai;
		}

		int pos = 0;
		while (pos < n) {
			vector<int>::iterator it = min_element(a.begin() + pos, a.end());
			int nxt = distance(a.begin(), it);
			int t = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + pos, t);
			if (nxt == pos) {
				pos++;
			}
			else {
				pos = nxt;
			}
		}

		for (auto ai : a) {
			cout << ai << " ";
		}
		cout << endl;
	}
}
