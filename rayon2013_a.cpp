#include <iostream>
#include <math.h>
using namespace std;

string interestingCorrespondence(int, string[10]);
string diagonalStr(int, int, int, string[10]);

int main()
{
	int n;
	string msg;
	cin >> n;
	cin >> msg;
	
	string s[10];
	int k = sqrt(n);
	string buff;
	for (int i = 0; i < n; i++) {
		buff += msg[i];
		if (i % k == (k - 1)) {
			s[i / k] = buff;
			buff = "";
		}
	}

	cout << interestingCorrespondence(k, s);

	return 0;
}

string interestingCorrespondence(int k, string s[10])
{
	string res = "";
	
	for (int x = 0; x < k; x++) {
		res += diagonalStr(x, 0, k, s);
	}

	for (int y = 1; y < k; y++) {
		res += diagonalStr(k - 1, y, k, s);
	}

	return res;
}

string diagonalStr(int x, int y, int k, string s[10])
{
	if (x - 1 < 0 || y + 1 >= k) {
		return string(1, s[y][x]);
	}

	return string(1, s[y][x]) + diagonalStr(x - 1, y + 1, k, s);
}
