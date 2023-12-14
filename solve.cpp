#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool ok(vector<int> &prefix, int len, int terget){
		for(int index = 1; index + len - 1 < prefix.size(); index++){
			if(prefix[index + len - 1] - prefix[index - 1] >= terget) return true;
		}
		return false;
	}

	int minSubArrayLen(int terget,  vector<int>& nums){
		vector<int>prefix(nums.size() + 1);
		prefix[0] = 0;

		for(int index = 0; index < nums.size(); index++){
			prefix[index + 1] = prefix[index] + nums[index];
			//cout << prefix[index + 1] << " ";
		}
		//cout << endl;

		int lo = 1, hi = (int) nums.size(), ret = 0;

		while(lo <= hi){
			int mid = (lo + hi) / 2;

			if(ok(prefix, mid, terget)){
				hi = mid - 1;
				ret = mid;
			}
			else lo = mid + 1;
		}

		return ret;
	}
};

void solve(int test_case){
	int n, terget;
	int ans;

	cin >> n >> terget >> ans;

	vector<int>v;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}

	Solution obj;

	int min_len = obj.minSubArrayLen(terget, v);
	
	cout << min_len << endl;

	if(min_len == ans){
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
