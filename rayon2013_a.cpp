#include <iostream>
#include <math.h>
using namespace std;

string interestingCorrespondence(int, string);
string diagonalStr(int, int, int, string);

int main()
{
	int n;
	string msg;
	cin >> n;
	cin >> msg;
	
	int k = sqrt(n);

	cout << interestingCorrespondence(k, msg);

	return 0;
}

string interestingCorrespondence(int k, string msg)
{
	string res = "";
	
	for (int x = 0; x < k; x++) {
		res += diagonalStr(x, 0, k, msg);
	}

	for (int y = 1; y < k; y++) {
		res += diagonalStr(k - 1, y, k, msg);
	}

	return res;
}

string diagonalStr(int x, int y, int k, string msg)
{
	if (x - 1 < 0 || y + 1 >= k) {
		return string(1, msg[y * k + x]);
	}

	return string(1, msg[y * k + x]) + diagonalStr(x - 1, y + 1, k, msg);
}
