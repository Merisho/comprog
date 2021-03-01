#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int andr = a + b + c;
	int o = a * 100 + b * 10 + c;

	if (andr > o) {
		cout << "Andriy";
	} else if (o > andr) {
		cout << "Oleg";
	} else {
		cout << "Draw";
	}
	
	return 0;
}
