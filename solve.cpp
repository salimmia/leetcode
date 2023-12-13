#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>&height){
		int left = 0, right = height.size() - 1;

		int _max = 0;
		while(left < right){
			_max = max(_max, min(height[left], height[right]) * (right - left));

			if(height[left] < height[right]) left++;
			else right--;
		}

		return _max;
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

	int max_area = obj.maxArea(v);
	
	cout << max_area << endl;

	if(max_area == terget){
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
