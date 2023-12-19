#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t){
		vector<int> cnt(26);

		for(int index = 0; index < s.size(); index++){
			cnt[s[index] - 'a']++;
		}
		
		for(int index = 0; index < t.size(); index++){
			cnt[t[index] - 'a']--;
		}

		for(int ch = 0; ch < 26; ch++){
			if(cnt[ch] != 0){
				return false;
			}
		}
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

	int is_true = obj.isAnagram(s, ss);
	
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
