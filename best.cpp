#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	bool canConstruct(string ransomNote, string magazine){
		vector<int>character(26, 0);

		for(auto x: magazine){
			character[x - 'a']++;
		}
		for(auto x: ransomNote){
			if(character[x - 'a'] == 0) return false;
			character[x - 'a']--;
		}
			
		return true;
	}
};

void solve(int test_case){
	int n, m, terget;
	int ans;

	string ransomNote, magazine;

	cin >> n >> m >> ans;
	
	cin >> ransomNote >> magazine;

	Solution obj;

	int is_possible = obj.canConstruct(ransomNote, magazine);
	
	cout << is_possible << endl;

	if(is_possible == ans){
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


