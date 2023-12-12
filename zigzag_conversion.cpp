#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
		int index = 0;

		vector<int>indexes;

		if(numRows == 1) return s;
		if(s.size() <= numRows) return s;		
		string ans = "";


		while(index < s.size() and index >= 0){
			indexes.push_back(index);
			ans += s[index];
			index += (numRows - 2) * 2 + 2;
		}
		indexes.push_back(index);
		
		int up_down = 1;

		int numRowsTemp = numRows - 1;

		while(--numRowsTemp){
			for(int i = 0; i < indexes.size(); i++){
				int pre_index = indexes[i] - up_down;
				int post_index = indexes[i] + up_down;
				if(i == 0 and post_index < s.size()){
					ans += s[post_index];
				}
				else{
					if(pre_index >= 0 and pre_index < s.size()) ans += s[pre_index];
					if(post_index >= 0 and post_index < s.size()) ans += s[post_index];
				}
			}
			up_down++;
		}

		index = numRows - 1;

		while(index < s.size() and index >= 0){
			ans += s[index];
			index += (numRows - 2) * 2 + 2;
		}

		return ans;
    }
};

void solve(){
	string s, ss;
	int k;

	cin >> s >> k >> ss;

	Solution obj; 

	if(obj.convert(s, k) == ss){
		//cout << obj.convert(s, k) << " " << ss << endl;
		cout << true << endl;
	}
	else cout << false << endl;
	
}

int main(){
	int t;

	cin >> t;

	while(t--){
		solve();
	}

	return 0;
}
