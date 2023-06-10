#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	cout << 0 << endl;
	for (ll i = 2; i<=n; i++) {
		cout << (i*i)*(i*i-1)/ 2-(4*(i-2)*(i-1))  << endl;
	}
	return;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	solve();
    	return 0;
}
