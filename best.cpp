#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	string convert(string s, int numRows){
		if(numRows == 1 or numRows >= s.size()) return s;

		int index = 0, direction = false;

		vector<string> row(numRows, "");

		for(int i = 0; i < s.size(); i++){
			if(index == 0 or index == numRows - 1) direction ^= 1;

			row[index] += s[i];

			if(direction) index++;
			else index--;
		}

		string zigzag = "";

		for(auto _row: row){
			zigzag += _row;
		}

		return zigzag;

	}
};

void solve(){
	string s, ss;
	int k;

	Solution obj;

	cin >> s >> k >> ss;

	if(obj.convert(s, k) == ss){
		cout << "Accepted" << endl;
	}
	else cout << "Wrong Answer" << endl;
	
	return;
}

int main(){
	int t;

	cin >> t;

	while(t--){
		solve();
	}
	
	return 0;
}


