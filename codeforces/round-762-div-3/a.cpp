#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int tc = 1; tc <= T; ++tc) {
	string s;
	cin >> s;

	int n = s.length();

	if (n % 2 == 1) {
	  cout << "NO" << endl;
	  continue;
	}
	
	if (s.substr(0, n / 2) == s.substr(n / 2, n / 2)) {
	  cout << "YES";
	} else {
	  cout << "NO";
	}

	cout << endl;
  }
}
