#include <iostream>
#include <map>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int tc = 1; tc <= T; ++tc) {
	int n;
	cin >> n;

	int ans = 0;
	map <int, bool> m;
	for (int i = 1; i * i <= n; ++i) {
	  ++ans;
	  m[i * i] = true;
	}

	for (int i = 1; i * i * i <= n; ++i) {
	  if (!m[i * i * i]) {
		++ans;
	  }
	}

	cout << ans << endl;
  }
  
  return 0;
}
