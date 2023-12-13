#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int binary_search(vector<int>&numbers, int val){
		int lo = 0, hi = numbers.size() - 1;

		while(lo < hi){
			int mid = (lo + hi + 1) >> 1;
			if(numbers[mid] <= val) lo =  mid;
			else hi = mid - 1;
		}
		return lo;
	}

	vector<int>twoSum(vector<int>&numbers, int terget){
		for(int index = 0; index < numbers.size() - 1; index++){
			int need_index = binary_search(numbers, terget - numbers[index]); 
			if(numbers[index] + numbers[need_index] == terget){
				return {index + 1, need_index + 1};
			}
		}
		return {0, 0};
	}
};

void solve(int test_case){
	int n, terget;

	cin >> n >> terget;

	vector<int>v;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}

	Solution obj;

	vector<int>indexes = obj.twoSum(v, terget);
	for(auto x: indexes) cout << x << " ";
	cout << endl;

	vector<int>ans;

	for(int i = 0; i < 2; i++){
		int x;
		cin >> x;
		ans.push_back(x);
	}

	if(ans == indexes){
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
