#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n; cin >> n;
	ll current = 5;
	ll answer = 0;
	while (current <= n) {
		answer += (n / current);
		current = current * 5;
	}
	cout << answer << endl;
	return;
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
