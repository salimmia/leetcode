#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
		int index_s = 0, index_t = 0;

		while( index_t < t.size() && index_s < s.size()){
			if(s[index_s] == t[index_t]) index_s++;
			index_t++;
		}

		return index_s == s.size();
	}
};

void solve(int test_case){
	string s, ss;
	bool is_true;

	cin >> s >> ss >> is_true;

	Solution obj; 

	if(obj.isSubsequence(s, ss) == is_true){
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
