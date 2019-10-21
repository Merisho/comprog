#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}

	sort(a.begin(), a.end());

	long long h = 0;
	long long v = 0;
	int s = a.size();
	for (int i = 0; i < s / 2; i++) {
		v += a[i];
		h += a[s - 1 - i];
	}

	if (s % 2 == 1) {
		h += a[s / 2];
	}

	cout << v * v + h * h;

	return 0;
}
