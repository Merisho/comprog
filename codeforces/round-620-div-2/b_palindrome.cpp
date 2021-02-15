#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> ss(n);
	map<string, bool> p;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		ss[i] = s;
		p[s] = true;
	}

	string md;
	string s1;
	string s2;
	for (int i = 0; i < n; ++i) {
		string rs = ss[i];
		reverse(rs.begin(), rs.end());

		if (ss[i] == rs) {
			md = ss[i];
		} else if (p[rs]) {
			p.erase(rs);
			p.erase(ss[i]);

			s1 += ss[i];
			s2 = rs + s2;
		}
	}

	string ans = s1 + md + s2;
	cout << ans.length() << endl << ans;
	
	return 0;
}
	