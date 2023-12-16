#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool isIsomorphic(string s, string t) {
		unordered_map<char, char> mps, mpt;

		for (int i = 0; i < s.size(); i++) {
			if (mps.find(s[i]) != mps.end()) {
				if (mps[s[i]] != t[i]) return false;
			}

			mps[s[i]] = t[i];

			if (mpt.find(t[i]) != mpt.end()) {
				if (mpt[t[i]] != s[i]) return false;
			}

			mpt[t[i]] = s[i];
		}
		return true;
	}
};

void solve(int test_case) {
	int n, terget;
	int ans;

	cin >> n >>  ans;

	vector<int>v;

	string s, ss;

	cin >> s >> ss;

	Solution obj;

	int is_true = obj.isIsomorphic(s, ss);

	cout << is_true << endl;

	if (is_true == ans) {
		//cout << obj.convert(s, k) << " " << ss << endl;
		cout << "Accepted"  << endl;
	}
	else cout << "Wrong Answer on test " << test_case << endl;

}

int main() {
	int t;

	cin >> t;

	for (int test = 1; test <= t; test++) {
		solve(test);
	}

	return 0;
}
