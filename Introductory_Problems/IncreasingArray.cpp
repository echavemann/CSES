#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
    cin >> n;
    vector<ll> v;
    while(n--) {
        ll z; cin >> z;
        v.push_back(z);
    }
    ll prev = v[0];
    ll cnt = 0;
    ll diff = 0;
    for (int i = 1; i < v.size(); i++) {
        diff = max(prev-v[i], 0x0ll);
        prev = v[i] + diff;
        cnt += diff;
    }
    cout << cnt << endl;
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
