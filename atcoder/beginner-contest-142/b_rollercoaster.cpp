#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int count = 0;
	for (int i = 0; i < n; ++i) {
		int h;
		cin >> h;

		if (h >= k) {
			++count;
		}
	}

	cout << count;

	return 0;
}
