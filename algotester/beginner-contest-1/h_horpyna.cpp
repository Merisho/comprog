#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> x(2 * n);
	for (int& xi : x) {
		cin >> xi;
	}

	sort(x.begin(), x.end());

	for (int i = 2 * n - 1; i > 0; i -= 2) {
		cout << x[i] << " " << x[i - 1] << endl;
	}
	
	return 0;
}
	