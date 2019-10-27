#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maxLength(vector<string>& arr) {
		if (arr.size() == 1) {
			return this->unique(arr[0]) ? arr[0].length() : 0;
		}
		string curr = "";
		int m = 0;
		for (int i = 0; i < arr.size(); i++) {
			curr = arr[i];
			for (int j = i + 1; j < arr.size(); j++) {
				if (this->unique(curr + arr[j])) {
					curr += arr[j];
				}
			}

			if (this->unique(curr) && curr.length() > m) {
				m = curr.length();
			}
		}

		return m;
	}

	bool unique(string a) {
		for (int i = 0; i < a.length(); i++) {
			for (int j = 0; j < a.length(); j++) {
				if (j == i) {
					continue;
				}
				if (a[i] == a[j]) {
					return false;
				}
			}
		}

		return true;
	}
};

int main() {
	Solution s = Solution();
	vector<string> v;
	v.push_back("abcdefghijklmnopqrstuvwxyz");
	cout << s.maxLength(v);
}
