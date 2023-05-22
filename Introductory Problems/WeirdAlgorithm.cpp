#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	while(n!=1) {
		cout << n << " ";
		if (n%2 == 0) {
			n = n/2;
		}
		else {
			n = n*3 + 1;
		}
	}
	cout << 1;
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
