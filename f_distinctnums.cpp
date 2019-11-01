#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> groups(n);
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		groups[t - 1]++;
	}

	sort(groups.begin(), groups.end());

	vector<int> sums(n + 1);
	for (int i = 0; i < n; i++) {
		sums[i + 1] = sums[i] + groups[i];
	}

	int times = n;
	int lastSmaller = n;
	for (int k = 1; k <= n; ++k) {
		while (times > 0) {
			while (lastSmaller > 0 && groups[lastSmaller - 1] >= times) {
				lastSmaller--;
			}

			if (times * (n - lastSmaller) + sums[lastSmaller] >= k * times) {
				break;
			}

			times--;
		}

		cout << times << endl;
	}

	return 0;
}
