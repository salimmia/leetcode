#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool is_character(char c){
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
			return true;
		}
		return false;
	}

	char lower(char c){
		if(c <= 'Z') c =  (c - 'A') + 'a';
		return c;
	}

    bool isPalindrome(string s) {
		int start_index = 0, last_index = s.size() - 1;

		while(start_index < last_index){
			if(!is_character(s[start_index])){
				start_index++;
				continue;
			}
			else if(!is_character(s[last_index])){
				last_index--;
				continue;
			}

			char start_char = lower(s[start_index]);
			char last_char = lower(s[last_index]);

			if(start_char != last_char) return false;

			start_index++;
			last_index;
		}

		return true;
	}
};

void solve(int test_case){
	string s, ss;
	bool is_true;

	cin >> s >> is_true;

	Solution obj; 

	if(obj.isPalindrome(s) == is_true){
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
