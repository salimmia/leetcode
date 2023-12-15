#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s){
		int left = 0, right = -1, max_length = 0;
		vector<int> cnt_char(200, 0);
		
		int sz = s.size();

		while(right < sz - 1){
			cnt_char[s[++right] - ' ']++;

			while(cnt_char[s[right] - ' '] > 1){
				cnt_char[s[left++] - ' ']--;
			}

			max_length = max(max_length, right - left + 1);
		}
		return max_length;
	}
};

void solve(int test_case){
	int n, terget;
	int ans;

	cin >> n >>  ans;

	vector<int>v;

	string s;
	
	cin >> s;

	Solution obj;

	int max_len = obj.lengthOfLongestSubstring(s);
	
	cout << max_len << endl;

	if(max_len == ans){
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
