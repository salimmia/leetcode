#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int wordPattern(string pattern, string s){
		int sz_p = pattern.size(), sz_s = s.size();

		unordered_map<char, string> p_s;
		unordered_map<string, char> s_p;

		int i = 0, j = 0;

		while(j < sz_s){
			if(i >= sz_s) return false;

			string word = "";

			while(j < sz_s && s[j] != '_'){ // replace '_' to ' '
				word += s[j++];
			}

			if(p_s.find(pattern[i]) != p_s.end()){
				if(p_s[pattern[i]] != word) return false;
			}

			if(s_p.find(word) != s_p.end()){
				if(s_p[word] != pattern[i]) return false;
			}

			p_s[pattern[i]] = word;
			s_p[word] = pattern[i++];
			j++;
		}
		if(i < sz_p) return false;

		return true;
	}
};

void solve(int test_case){
	int n, terget;
	int ans;

	cin >>  ans;

	vector<int>v;

	string s, ss;
	
	cin >> s >> ss;

	Solution obj;

	int is_true = obj.wordPattern(s, ss);
	
	cout << is_true << endl;

	if(is_true == ans){
		//cout << obj.convert(s, k) << " " << ss << endl;
		cout << "Accepted"  << endl;
	}
	else cout << "Wrong Answer on test " << test_case << endl;
	
}

int main(){
	int t;

	cin >> t;

	for(int test = 1; test <= t; test++){
		solve(test);
	}
	
	return 0;
}
