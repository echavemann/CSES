#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n; cin >> n;
	vector<int> nums;
	for(int j = 0; j < n-1; j++) {
		int z; cin >> z;
		nums.push_back(z);
	}
	sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size(); i++) {
		if (nums[i] != (i+1)) {
			cout << i+1;
			return;
		}
	}
	cout << n << endl;
	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
        solve();
    	return 0;
}
