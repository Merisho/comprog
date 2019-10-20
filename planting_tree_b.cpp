#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> a;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int ai;
		cin >> ai;

		a.push_back(ai);
	}

	qsort(a.begin(), a.end());
}
