#include <iostream>
#include <vector>
using namespace std;

int integerPoints();

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		cout << integerPoints() << "\n";
	}

	return 0;
}

int integerPoints() {
	int n;
	cin >> n;

	int pe = 0;
	int po = 0;
	int pz = 0;
	for (int i = 0; i < n; i++) {
		int pi;
		cin >> pi;
		if (pi == 0) {
			pz++;
		}
		else if (pi % 2 == 0) {
			pe++;
		}
		else {
			po++;
		}
	}

	int m;
	cin >> m;

	int qe = 0;
	int qo = 0;
	int qz = 0;
	for (int i = 0; i < m; i++) {
		int qi;
		cin >> qi;
		if (qi == 0) {
			qz++;
		}
		else if (qi % 2 == 0) {
			qe++;
		}
		else {
			qo++;
		}
	}

	return pe * qe + po * qo + pz * qe + qz * pe;
}
