#include <iostream>
#include <vector>
using namespace std;

int bookreading(int, int, int, vector<int>, vector<int>);

int main()
{
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int n, m, q;
		cin >> n >> m >> q;

		vector<int> p;
		for (int i = 0; i < m; i++) {
			int pi;
			cin >> pi;
			p.push_back(pi);
		}

		vector<int> r;
		for (int i = 0; i < q; i++) {
			int ri;
			cin >> ri;
			r.push_back(ri);
		}

		cout << "Case #" << t + 1 << ": " << bookreading(n, m, q, p, r) << "\n";
	}

	return 0;
}

int bookreading(int n, int m, int q, vector<int> p, vector<int> r)
{
	int sum = 0;

	for (int i = 0; i < q; i++) {
		sum += n / r[i];
		for (int j = 0; j < m; j++) {
			if (p[j] % r[i] == 0) {
				sum--;
			}
		}
	}

	return sum;
}
