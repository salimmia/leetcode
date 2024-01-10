#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &nums, int terget){
		vector<pair<int, int> > v;
		vector<int> ret;

		for(int i = 0; i < nums.size(); i++){
			v.push_back({nums[i], i});
		}
		sort(v.begin(), v.end());
		
		for(int i = 0; i < v.size(); i++){
			int lo = i + 1, hi = v.size() - 1;

			while(lo < hi){
				int mid = (lo + hi) >> 1;

				if(v[i].first + v[mid].first >= terget){
					hi = mid;
				}
				else lo = mid + 1;
			}
			if(v[i].first + v[lo].first == terget){
				ret.push_back(v[i].second);
				ret.push_back(v[lo].second);
				break;
			}
		}
		return ret;
	}
};

void solve(int test_case) {
	int n, terget;
	int ans;

	cin >>  ans;

	vector<int>v;

	string s, ss;
<<<<<<< HEAD

=======
	
>>>>>>> solve
	cin >> s >> ss;

	Solution obj;

<<<<<<< HEAD
<<<<<<< HEAD
	int is_true = obj.isIsomorphic(s, ss);

	cout << is_true << endl;

	if (is_true == ans) {
=======
	int is_true = obj.wordPattern(s, ss);
=======
	int is_true = obj.isAnagram(s, ss);
>>>>>>> solve
	
	cout << is_true << endl;

	if(is_true == ans){
>>>>>>> solve
		//cout << obj.convert(s, k) << " " << ss << endl;
		cout << "Accepted"  << endl;
	}
	else cout << "Wrong Answer on test " << test_case << endl;

}

int main() {
	int t;

	cin >> t;

	for (int test = 1; test <= t; test++) {
		solve(test);
	}

	return 0;
}
