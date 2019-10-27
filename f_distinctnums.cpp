#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int>, vector<int>, int);
int findGreater(vector<int>, int);

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
	for (it = m.begin(); it != m.end(); ++it) {
		groups.push_back(it->second);
	}

	sort(groups.begin(), groups.end());

	vector<int> sums;
	sums.push_back(groups[0]);
	for (int i = 1; i < groups.size(); i++) {
		sums.push_back(groups[i - 1] + groups[i]);
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
	int s = 0;
	int i = findGreater(groups, size);
	
	if (i == -1) {
		
	}

	s += (groups.size() - i - 1) * size + sums[i - 1];

	return s;
}

int findGreater(vector<int> v, int size) {
	int vsize = v.size();
	int i = vsize / 2;
	while (i > 0 && i < vsize - 1) {
		int j = i + 1;
		if (v[i] < size && v[j] >= size) {
			return j;
		}

		if (v[i] <= size && v[j] <= size) {
			i += i / 2;
		}
		else if (v[i] >= size && v[j] >= size) {
			i += i / 2;
		}

	}

	return v[i] >= size ? i : -1;
}
