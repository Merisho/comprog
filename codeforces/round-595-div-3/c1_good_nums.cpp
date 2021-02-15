#include "iostream"
#include "math.h"
using namespace std;

int goodNum();

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cout << goodNum() << endl;
	}
}

int goodNum() {
	int n;
	cin >> n;

	int k = log(n) / log(3);

	if (pow(3, k) < n) {
		return pow(3, k + 1);
	}

	return n;
}