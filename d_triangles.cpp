#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> ln;

	for (int i = 0; i < n; i++) {
		int li;
		cin >> li;
		ln.push_back(li);
	}

	sort(ln.begin(), ln.end());

	int count = 0;
	for (int i = n - 1; i >= 2; i--) {
		int l = 0;
		int r = i - 1;
		while (l < r) {
			if (ln[l] + ln[r] > ln[i]) {
				count += r - l;
				r--;
			}
			else {
				l++;
			}
		}
	}

	cout << count;
}
