#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int>, vector<int>, int);
int findGreater(vector<int>, int);

int m[300000];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		m[t]++;
	}

	vector<int> groups;
	for (int i = 0; i < 300000; ++i) {
		if (m[i] > 0) {
			groups.push_back(m[i]);
		}
	}

	sort(groups.begin(), groups.end());

	vector<int> sums;
	sums.push_back(groups[0]);
	for (int i = 1; i < groups.size(); i++) {
		sums.push_back(sums[i - 1] + groups[i]);
	}

	cout << n << endl;
	int prevSize = n;
	for (int k = 2; k <= n; ++k) {
		int size = prevSize;
		while (size > 0) {
			if (sum(groups, sums, size) >= k * size) {
				break;
			}

			size--;
		}

		cout << size << endl;
		prevSize = size;
	}

	return 0;
}

int sum(vector<int> groups, vector<int> sums, int size) {
	int i = findGreater(groups, size);

	if (i == -1) {
		return groups.size() * size;
	}

	return (groups.size() - i - 1) * size + sums[i];
}

int findGreater(vector<int> v, int size) {
	int len = v.size();
	int start = 0;
	int end = len - 1;
	while (start < end) {
		int m = start + (end - start) / 2;
		if (v[m] < size && v[m + 1] < size) {
			start = m + 1;
		}
		else if (v[m] >= size && v[m + 1] >= size) {
			end = m;
		}
		else {
			return m;
		}
	}

	if (end == 0) {
		return -1;
	}

	return len - 1;
}
