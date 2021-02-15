#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	double s = 0;
	for (int& ai : a) {
		cin >> ai;
		s += double(ai);
	}

	int k = 0;
	double t = s / (4 * double(m));
	for (int ai : a) {
		if (double(ai) >= t) {
			++k;
		}
	}

	cout << (k >= m ? "Yes" : "No");
	
	return 0;
}
	