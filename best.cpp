#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	vector<vector<string>> groupAnagrams(vector<string> &strs){
		vector<vector<string>> ans;
		map<string, vector<string>> ret;

		for(int i = 0; i < strs.size(); i++){
			string now = strs[i];

			sort(now.begin(), now.end());

			ret[now].push_back(strs[i]);
		}
		for(auto it: ret){
			ans.push_back(it.second);	
		}

		return ans;
	}
};

void solve(int test_case){
	int n;

	cin >> n;

	vector<string> v;
	
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;

		v.push_back(s);
	}

	Solution obj;

	vector<vector<string>> vv = obj.groupAnagrams(v);
	
	for(auto x: vv){
		for(auto xx: x) cout << xx << " ";
		cout << endl;
	}

	if(1){
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


