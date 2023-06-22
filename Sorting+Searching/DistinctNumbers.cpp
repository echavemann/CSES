#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n; cin >> n;
	set<ll> nums;
	while(n--) {
		ll z; cin >> z;
		nums.insert(z); //example of worst case time being important!
	}
	cout << nums.size() << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    	{
        	solve();
    	}
    	return 0;
}
