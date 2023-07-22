// Problem URL: https://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve(int test_case) {
	string s;
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        if (c < 97) {
            c += 32;
        }

        if (c == 'a' || c== 'o' || c== 'y' || c== 'u' || c== 'e' || c== 'i') {
            continue;
        }

        cout << "." << c;
    }
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_118a_string_task_input.txt", "r", stdin);
    #endif

	solve(0);

	return 0;
}
