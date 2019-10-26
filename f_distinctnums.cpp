#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int>, int);

int main() {
	int n;
	cin >> n;

	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		m[t]++;
	}

	vector<int> groups;
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		groups.push_back(it->second);
	}

	sort(groups.begin(), groups.end());

	cout << n << endl;
	int prevSize = n;
	for (int k = 2; k <= n; k++) {
		int size = prevSize;
		while (size > 0) {
			if (sum(groups, size) >= k * size) {
				break;
			}

			size--;
		}

		cout << size << endl;
		prevSize = size;
	}

	return 0;
}

int sum(vector<int> groups, int size) {
	int s = 0;
	int i = 0;
	for (auto const& v : groups) {
		if (v >= size) {
			break;
		}

		s += v;
		i++;
	}

	s += (groups.size() - i) * size;

	return s;
}
