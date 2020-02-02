#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	bool correct = true;
	for (int i = n - 1; i >= 0; --i) {
		int b;
		cin >> b;
		if (a[i] != b) {
			correct = false;
		}
	}

	if (correct) {
		cout << "Yes";
		return 0;
	}

	cout << "No" << endl;
	for (int i = n - 1; i >= 0; --i) {
		cout << a[i] << " ";
	}

	return 0;
}
	