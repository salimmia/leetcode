#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
	int wordPattern(string pattern, string s){
		int sz_p = pattern.size(), sz_s = s.size();
=======
	bool isAnagram(string s, string t){
		vector<int> cnt(26);
>>>>>>> solve

		for(int index = 0; index < s.size(); index++){
			cnt[s[index] - 'a']++;
		}
		
		for(int index = 0; index < t.size(); index++){
			cnt[t[index] - 'a']--;
		}

<<<<<<< HEAD
>>>>>>> solve
=======
		for(int ch = 0; ch < 26; ch++){
			if(cnt[ch] != 0){
				return false;
			}
		}
>>>>>>> solve
		return true;
	}
};

void solve(int test_case) {
	int n, terget;
	int ans;

	cin >>  ans;

	vector<int>v;

	string s, ss;
<<<<<<< HEAD

=======
	
>>>>>>> solve
	cin >> s >> ss;

	Solution obj;

<<<<<<< HEAD
<<<<<<< HEAD
	int is_true = obj.isIsomorphic(s, ss);

	cout << is_true << endl;

	if (is_true == ans) {
=======
	int is_true = obj.wordPattern(s, ss);
=======
	int is_true = obj.isAnagram(s, ss);
>>>>>>> solve
	
	cout << is_true << endl;

	if(is_true == ans){
>>>>>>> solve
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
