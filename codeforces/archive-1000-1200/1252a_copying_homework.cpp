#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	for (int ai : a) {
		cout << (n + 1 - ai) << " ";
	}
	
	return 0;
}
	