#include <iostream>
#include <vector>
using namespace std;

long long integerPoints();

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		cout << integerPoints() << "\n";
	}

	return 0;
}

long long integerPoints() {
	int n;
	cin >> n;

	long long pe = 0;
	long long po = 0;
	for (int i = 0; i < n; i++) {
		long pi;
		cin >> pi;
		if (pi % 2 == 0) {
			pe++;
		}
		else {
			po++;
		}
	}

	int m;
	cin >> m;

	long long qe = 0;
	long long qo = 0;
	for (int i = 0; i < m; i++) {
		long qi;
		cin >> qi;
		if (qi % 2 == 0) {
			qe++;
		}
		else {
			qo++;
		}
	}

	return pe * qe + po * qo;
}
