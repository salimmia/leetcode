#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int sq(int n){
		return n * n;
	}
	bool isHappy(int n){
		unordered_map<int, bool>mp;
		
		mp[n] = true;
		while(n != 1 && mp[n] == false){
			int now = 0;

			while(n){
				now += sq(n % 10);
				n /= 10;
			}
			n = now;
			mp[n] = true;
		}
		return mp[1];
	}
};

