#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (ll& ai : a) {
		cin >> ai;
	}

	if (n == 1) {
		cout << "1 1" << endl << "0" << endl;
		cout << "1 1" << endl << "0" << endl;
		cout << "1 1" << endl << -a[0] << endl;
		return 0;
	}

	cout << "1 1" << endl << -a[0] << endl;
	cout << "1 " << n << endl;
	cout << 0 << " ";
	for (int i = 1; i < n; ++i) {
		cout << (-n * a[i]) << " ";
	}
	cout << endl;
	cout << "2 " << n << endl;
	for (int i = 1; i < n; ++i) {
		cout << (a[i] * (n - 1)) << " ";
	}
	
	return 0;
}
