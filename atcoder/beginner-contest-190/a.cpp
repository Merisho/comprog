#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (c == 0) {
		if (a <= b) {
			cout << "Aoki";
		} else {
			cout << "Takahashi";
		}
	} else {
		if (b <= a) {
			cout << "Takahashi";
		} else {
			cout << "Aoki";
		}
	}
	
	return 0;
}
