#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n > 81) {
		cout << "No";
		return 0;
	}

	for (int i = 1; i <= 9; i++) {
		if (n % i == 0 && n / i <= 9) {
			cout << "Yes";
			return 0;
		}
	}
	
	cout << "No";

	return 0;
}
