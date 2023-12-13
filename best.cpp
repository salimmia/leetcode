#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int>twoSum(vector<int>&numbers, int terget){
		int start_index = 0, last_index = numbers.size() - 1;
		
		int sum = numbers[start_index] + numbers[last_index];
		while(sum != terget){
			if(sum < terget){
				sum -= numbers[start_index];
				sum += numbers[++start_index];
			}
			else{
				sum -= numbers[last_index];
				sum += numbers[--last_index];
			}
		}
		return {start_index + 1, last_index + 1};	
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
