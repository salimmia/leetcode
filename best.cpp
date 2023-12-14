#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	int minSubArrayLen(int terget,  vector<int>& nums){
		int now_sum = 0, left = 0, right = -1;
		
		int sz = nums.size();
		
		int min_len = nums.size() + 1;
		
		while(right < sz - 1){
			now_sum += nums[++right];

			while(now_sum - nums[left] >= terget){
				now_sum -= nums[left++];
			}

			if(now_sum >= terget) min_len = min(min_len, right - left + 1);
		}
		
		if(min_len == nums.size() + 1) return 0;
		
		return min_len;
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


