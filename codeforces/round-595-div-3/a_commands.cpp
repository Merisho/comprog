#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int division();
int _div(int s, vector<int> a);

int main() {
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cout << division() << endl;
	}
}

int division() {
	int n;
	cin >> n;

	vector<int> a;
	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;
		a.push_back(ai);
	}

	sort(a.begin(), a.end());

	return _div(0, a);
}

int _div(int s, vector<int> a) {
	int sum = 0;
	for (int i = s; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size(); j++) {
			if (abs(a[i] - a[j]) != 1) {
				sum += _div(j, a);
				break;
			}
		}
	}

	return sum;
}
