#include <iostream>
using namespace std;

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;

		int x = s / n;
		int y = s % n;

		if (x <= a && y <= b) {
			cout << "YES";
		}
		else if (x > a && (s - a * n) <= b) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

		cout << endl;
	}
}
